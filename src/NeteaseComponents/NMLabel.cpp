//
// Created by mp5530 on 1/24/24.
//

#include "NMLabel.h"

#include <QMouseEvent>
#include <QPainter>

NMClickedLabel::NMClickedLabel(QWidget* parent)
    : QLabel(parent)
{
}

void NMClickedLabel::mousePressEvent(QMouseEvent* ev)
{
    if (ev->button() == Qt::LeftButton) {
        emit clicked();
    }
    //  QLabel::mousePressEvent(ev);
}

void NMIconLabel::setIcon(const QString& icon, const QSize& size)
{
    this->setFixedSize(size);

    m_image = QImage(icon);
}
void NMIconLabel::setIcon(const QString& icon)
{
    m_image = QImage(icon);
}
void NMIconLabel::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawImage(this->rect(), m_image);
}
