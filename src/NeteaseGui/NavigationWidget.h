//
// Created by mp5530 on 1/24/24.
//

#ifndef DEVPROJECTSHUB_NAVIGATIONWIDGET_H
#define DEVPROJECTSHUB_NAVIGATIONWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class NavigationWidget;
}
QT_END_NAMESPACE

class NavigationWidget : public QWidget {
    Q_OBJECT

public:
    explicit NavigationWidget(QWidget* parent = nullptr);

    ~NavigationWidget() override;

private:
    Ui::NavigationWidget* ui;
};

#endif // DEVPROJECTSHUB_NAVIGATIONWIDGET_H
