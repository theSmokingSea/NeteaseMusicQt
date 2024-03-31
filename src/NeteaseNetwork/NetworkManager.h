//
// Created by mp5530 on 1/24/24.
//

#ifndef NETEASEMUSICQT_NETWORKMANAGER_H
#define NETEASEMUSICQT_NETWORKMANAGER_H

#include <QJsonObject>
#include <QObject>

class QNetworkAccessManager;

class NetworkManager : public QObject {
public:
    static NetworkManager* instance();

    QString createQRCode();

private:
    QUrl getUrl(const QString& url, QJsonObject json = QJsonObject());
    QJsonObject jsonObject(const QByteArray& json);
    QString getTimeStamp();

public:
    NetworkManager(const NetworkManager&) = delete;
    NetworkManager& operator=(const NetworkManager&) = delete;
    NetworkManager(NetworkManager&&) = delete;
    NetworkManager&& operator=(NetworkManager&&) = delete;

private:
    NetworkManager();
    ~NetworkManager() override = default;

private:
    const QString m_base_url = "http://127.0.0.1:3000";
    QNetworkAccessManager* m_network_manager;
};

#endif // NETEASEMUSICQT_NETWORKMANAGER_H
