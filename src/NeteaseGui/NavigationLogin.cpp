//
// Created by mp5530 on 1/24/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_NavigationLogin.h" resolved

#include "NavigationLogin.h"
#include "NetworkManager.h"
#include "ui_NavigationLogin.h"

NavigationLogin::NavigationLogin(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::NavigationLogin)
{
    ui->setupUi(this);

    this->setWindowTitle(tr("登陆"));

    ui->label_tip->setIcon(tr(":/res/icon/navigation/icon_qr_code_tip.png"));

    NetworkManager::instance()->createQRCode();
}

NavigationLogin::~NavigationLogin()
{
    delete ui;
}
