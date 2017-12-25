//
// Created by dong Zhang on 12/23/17.
//

#include "../header/Circle.h"

Circle::Circle()
{
    this->r=5.0;
}

Circle::Circle(double R)
{
    this->r=R;
}

double Circle:: Area()
{
    return 3.14*r*r;
}