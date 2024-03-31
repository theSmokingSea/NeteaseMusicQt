//
// Created by mp5530 on 1/24/24.
//

#ifndef NETEASEMUSICQT_NAVIGATIONLOGIN_H
#define NETEASEMUSICQT_NAVIGATIONLOGIN_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class NavigationLogin;
}
QT_END_NAMESPACE

class NavigationLogin : public QDialog {
    Q_OBJECT

public:
    explicit NavigationLogin(QWidget* parent = nullptr);

    ~NavigationLogin() override;

private:
    Ui::NavigationLogin* ui;
};

#endif // NETEASEMUSICQT_NAVIGATIONLOGIN_H
