//
// Created by mp5530 on 1/24/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_NavigationUserWidget.h" resolved

#include "NavigationUserWidget.h"
#include "NavigationLogin.h"
#include "ui_NavigationUserWidget.h"

NavigationUserWidget::NavigationUserWidget(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::NavigationUserWidget)
{
    ui->setupUi(this);
    ui->label_icon->setIcon(":/res/icon/navigation/icon_login.png", { 40, 40 });
    ui->label_function->setIcon(":/res/icon/navigation/icon_right.png", { 16, 16 });

    connect(ui->label_icon, &NMClickedLabel::clicked, this, [this]() {
        slotLogin();
    });
    connect(ui->label_user, &NMClickedLabel::clicked, this, [this]() {
        slotLogin();
    });
    connect(ui->label_function, &NMClickedLabel::clicked, this, [this]() {
        slotLogin();
    });
}

NavigationUserWidget::~NavigationUserWidget()
{
    delete ui;
}

void NavigationUserWidget::slotLogin()
{
    NavigationLogin login(this);
    login.setModal(true);
    login.exec();
}

void NavigationUserWidget::slotUserInfo()
{
}

void NavigationUserWidget::slotLoginInfo()
{
}
