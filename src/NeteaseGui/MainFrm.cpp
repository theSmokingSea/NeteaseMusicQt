//
// Created by mp5530 on 1/24/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainFrm.h" resolved

#include "MainFrm.h"
#include "ui_MainFrm.h"

MainFrm::MainFrm(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainFrm)
{
    ui->setupUi(this);
}

MainFrm::~MainFrm()
{
    delete ui;
}
