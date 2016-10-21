#ifndef vector_h
#define vector_h
#include "Punto.h"
class Vector
{
    punto px1;
    punto px2;
public:
    Vector();
    Vector(punto ,punto );
    void suma(int , int );
    void print();
};


#endif
