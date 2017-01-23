#include <QCoreApplication>
#include "amazing.h"
#include <QDebug>

void function(void (Amazing::*callableObj)(int), Amazing & t_obj) {
   (t_obj.*callableObj)(15);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Amazing amazing;
    void (Amazing::*SD)(int)  = &Amazing::setData;
    function(SD, amazing);
    qDebug() << amazing.data();


    return a.exec();
}
