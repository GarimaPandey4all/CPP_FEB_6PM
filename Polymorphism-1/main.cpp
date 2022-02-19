#include <iostream>

using namespace std;

//Polymorphism: Poly - many, morphism: forms
//
//Person: son, father, employee, brother, uncle, etc
//
//Types:
//
//    a. Compile Time Polymorphism
//     - function overloading, - operator overloading
//    b. Runtime Polymorphism
//     - function overriding

//function overloading
//- function name same for all the function
//- function's parameters /arguments must be different (number, type)

void add(int a, int b)
{
    cout<<"Addition Int is: "<<(a + b)<<endl;
}

void add(float a, float b)
{
    cout<<"Addition Float is: "<<(a + b)<<endl;
}

void add(double a, double b)
{
    cout<<"Addition Double is: "<<(a + b)<<endl;
}

int main()
{
    add(10, 20);
    add(108.34, 20.69);
    add(100.78f, 20.48f);

    return 0;
}
