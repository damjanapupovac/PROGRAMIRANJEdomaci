#include "Component.h"
#include <iostream>

Component::Component(double x, double y)
{
    X=x;
    Y=y;
}

double Component::getX() const
{
    return X;
}

double Component::getY() const
{
    return Y;
}

void printComponent(double promenljiva) const
{
    double p=promenljiva;
    cout<<p;
}

Component::~Component()
{
    //dtor
}
