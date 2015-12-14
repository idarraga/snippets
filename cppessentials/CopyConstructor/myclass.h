#ifndef MYCLASS_H
#define MYCLASS_H

/*
 * John Idarraga <john@idarraga.com> 2015
*/

#define __arraysize 10

class MyClass
{
public:

    MyClass();
    MyClass(const MyClass&);
    MyClass & operator=(const MyClass&);

    int * getPointer() { return p; }
    void dumpData();

private:
    int * p; //! The part that we will have to copy ourselves
};

#endif // MYCLASS_H
