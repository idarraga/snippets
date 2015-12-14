/*
 * John Idarraga <john@idarraga.com> 2015
*/

#include <QCoreApplication>

#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass m1;
    MyClass m2;
    m2 = m1;

    MyClass m3(m1);

    m1.dumpData();
    m2.dumpData();
    m3.dumpData();


    return a.exec();
}

