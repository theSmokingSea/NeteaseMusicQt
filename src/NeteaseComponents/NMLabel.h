//
// Created by mp5530 on 1/24/24.
//

#ifndef DEVPROJECTSHUB_NMLABEL_H
#define DEVPROJECTSHUB_NMLABEL_H

#include <QImage>
#include <QLabel>

#include "NeteaseComponentsGlobal.h"

class NeteaseComponentsExport NMClickedLabel : public QLabel {
    Q_OBJECT
public:
    explicit NMClickedLabel(QWidget* parent = nullptr);
    ~NMClickedLabel() override = default;

protected:
    void mousePressEvent(QMouseEvent* ev) override;

signals:
    void clicked();
};

class NeteaseComponentsExport NMIconLabel : public NMClickedLabel {
    Q_OBJECT
public:
    using NMClickedLabel::NMClickedLabel;
    void setIcon(const QString& icon, const QSize& size);
    void setIcon(const QString& icon);

protected:
    void paintEvent(QPaintEvent*) override;

private:
    QImage m_image;
};

#endif // DEVPROJECTSHUB_NMLABEL_H
