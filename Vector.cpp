#include "vector.h"
#include "Punto.h"
using namespace std;
Vector::Vector()
{
    px1 = punto();
    px2 = punto();
}
Vector::Vector(punto p1,punto p2)
{
    px1 = p1;
    px2 = p2;
}
void Vector::suma(int a, int b)
{
    px1.suma(a,b);
}
void Vector::print()
{
    px1.print();
    px2.print();
}

