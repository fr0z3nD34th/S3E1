#include "mainwindow.h"

#include <QApplication>
void setft(){
    exit(-2);
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

