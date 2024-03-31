//
// Created by mp5530 on 1/24/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_NavigationWidget.h" resolved

#include "NavigationWidget.h"
#include "ui_NavigationWidget.h"

NavigationWidget::NavigationWidget(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::NavigationWidget)
{
    ui->setupUi(this);
    this->adjustSize();
}

NavigationWidget::~NavigationWidget()
{
    delete ui;
}
