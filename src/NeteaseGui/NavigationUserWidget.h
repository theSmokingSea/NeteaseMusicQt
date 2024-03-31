//
// Created by mp5530 on 1/24/24.
//

#ifndef DEVPROJECTSHUB_NAVIGATIONUSERWIDGET_H
#define DEVPROJECTSHUB_NAVIGATIONUSERWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class NavigationUserWidget;
}
QT_END_NAMESPACE

class NavigationUserWidget : public QWidget {
    Q_OBJECT

public:
    explicit NavigationUserWidget(QWidget* parent = nullptr);

    ~NavigationUserWidget() override;

private:
    void slotLogin();
    void slotUserInfo();
    void slotLoginInfo();

private:
    Ui::NavigationUserWidget* ui;
};

#endif // DEVPROJECTSHUB_NAVIGATIONUSERWIDGET_H
