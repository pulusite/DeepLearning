//
// Created by dong Zhang on 12/23/17.
//

#include "../header/Circle.h"
#include <iostream>
using namespace std;

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


//int main() {
//    cout << "Hello World"<<endl;
//    Circle c(3);
//    cout<<"Area="<<c.Area()<<endl;
//    return 1;
//}
