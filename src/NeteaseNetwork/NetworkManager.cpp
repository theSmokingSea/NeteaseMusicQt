//
// Created by mp5530 on 1/24/24.
//

#include "NetworkManager.h"

#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkReply>

NetworkManager* NetworkManager::instance()
{
    static NetworkManager network;
    return &network;
}

NetworkManager::NetworkManager()
{
    m_network_manager = new QNetworkAccessManager();
}

QString NetworkManager::createQRCode()
{
    QNetworkRequest request(getUrl("/login/qr/key")); // 登录URL
    QNetworkReply* reply = m_network_manager->get(request); // 发送登录请求
    connect(reply, &QNetworkReply::finished, [reply, this]() {
        if (reply->error() != QNetworkReply::NoError) {
            qDebug() << reply->errorString();
            return;
        }
        QByteArray response = reply->readAll();
        QJsonObject json = jsonObject(response);
        QString key = json["unikey"].toString();

        QJsonObject create;
        create["key"] = key;
        create["timestamp"] = getTimeStamp();
        create["qrimg"] = "true";
        QNetworkRequest qr_request(getUrl("/login/qr/create", create));
        QNetworkReply* qr_reply = m_network_manager->get(qr_request); // 发送登录请求
        connect(qr_reply, &QNetworkReply::finished, [qr_reply, this]() {
            if (qr_reply->error() != QNetworkReply::NoError) {
                qDebug() << qr_reply->errorString();
                return;
            }
            QByteArray response = qr_reply->readAll();
            QJsonObject json = jsonObject(response);
            QString qrimg = json["qrimg"].toString();
        });
    });

    return QString();
}

QUrl NetworkManager::getUrl(const QString& url, QJsonObject json)
{
    QString address = QString("%1%2").arg(m_base_url, url);
    if (!json.isEmpty()) {
        address += "?";
        for (auto iter = json.begin(); iter != json.end(); ++iter) {
            address += iter.key() + "=" + iter.value().toString() + "&";
        }
    }
    qDebug() << address;

    return address;
}

QJsonObject NetworkManager::jsonObject(const QByteArray& json)
{
    QJsonDocument document = QJsonDocument::fromJson(json);
    QJsonObject obj = document.object();
    if (obj.contains("code") && obj["code"].toInt() == 200) {
        return obj["data"].toObject();
    }
    return {};
}

QString NetworkManager::getTimeStamp()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();

    // 将当前日期和时间转换为Unix时间戳
    qint64 timestamp = currentDateTime.toSecsSinceEpoch();

    return QString::number(timestamp);
}
