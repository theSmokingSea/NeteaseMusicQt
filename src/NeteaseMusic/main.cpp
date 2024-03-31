//
// Created by mp5530 on 1/24/24.
//

#include <QApplication>

#include "MainFrm.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainFrm w;
    w.show();

    return QApplication::exec();
}
#include "main.moc"
