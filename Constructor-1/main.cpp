#include <iostream>

using namespace std;

//Constructor: Create or construct
//Q. Need to initialize the member variables when we create an object of class.
//and: Constructor
//
//- Constructor is used to intialize the member variables when we create an object of class.
//- Constructor is a special type of method
//- Constructor name is same as class name
//- Contructor called only once
//- We can have default constructor in every class when we create object of the same

class Demo {

private:
    int a, b;

public:
    //default Constructor
//    Demo()
//    {
//        a = 10;
//        b = 200;
//    }

    //Parameterized Constructor
    Demo(int a , int b)
    {
        this->a = a;
        this->b = b;
    }

    void getData()
    {
        cout<<a<<" "<<b<<endl;
    }
};


int main()
{
    //Demo d; // Call Default Constructor
    Demo d(100, 200); // call parameterized constructor

    d.getData();

    return 0;
}
