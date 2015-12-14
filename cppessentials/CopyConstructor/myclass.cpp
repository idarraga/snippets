/*
 * John Idarraga <john@idarraga.com> 2015
*/

#include "myclass.h"

#include <QDebug>
#include <QString>

/*!
 * \brief MyClass::MyClass
 *        The constructor
 */
MyClass::MyClass()
{
    p = new int[__arraysize];

    qsrand(12345);
    for(int i = 0 ; i < __arraysize ; i++) p[i] = qrand();

    qDebug() << "Constructor{MyClassArray}";
}

/*!
 * \brief MyClass::MyClass
 *        The copy constructor
 */
MyClass::MyClass(const MyClass & t)
{
    // The copy constructor must initialize memory
    p = new int[__arraysize];
    for(int i = 0 ; i < __arraysize ; i++) p[i] = t.p[i];

    qDebug() << "Copy Constructor{MyClassArray}";
}

/*!
 * \brief MyClass::operator =
 *        The copy assignment
 */
MyClass &MyClass::operator=(const MyClass & t)
{

    //! The assignment is dealing with already fullu initialized objects
    //! 1) Avoid self assignment
    if (this != &t) {
        //! 2) Delete old data
        delete [] p;
        //! 3) Initialize
        p = new int[__arraysize];
        //! 4) Copy
        for(int i = 0 ; i < __arraysize ; i++) p[i] = t.p[i];
    }

    qDebug() << "Copy assignment {MyClassArray}";

    return *this;
}

void MyClass::dumpData()
{
    qDebug() << "\nObject @" << this;
    for(int i = 0 ; i < __arraysize ; i++) {
        qDebug() << p[i];
    }
}


