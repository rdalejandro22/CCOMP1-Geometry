#include "Punto.h"
#include <iostream>
using namespace std;
punto::punto(): x(0),y(0){}
punto::punto(int a, int b): x(a), y(b){}
void punto::print()
{
    cout<< x << " " << y << endl;
}
int punto::getX()
{
    return x;
}
int punto::getY()
{
    return y;
}
int punto::setX(int a)
{
    x=a;
}
int punto::setY(int b)
{
    x=b;
}
void punto::suma(int a, int b)
{
    x +=a;
    y +=b;
}
