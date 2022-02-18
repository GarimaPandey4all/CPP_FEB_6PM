#include <iostream>

using namespace std;

//Multiple
//
//P1      P2
//
//    C
//
//- More than one parent class and common child class


class Parent1 { // Parent , Super , Base
public:
    void show()
    {
        cout<<"Parent1 Class"<<endl;
    }
};

class Parent2 { // Parent , Super , Base
public:
    void getData()
    {
        cout<<"Parent2 Class"<<endl;
    }
};

//Child , Sub , Derived
class Child : public Parent1, public Parent2{  // Inheritance

public:
    void display()
    {
        cout<<"Child Class"<<endl;
    }

};

int main()
{
    Child C;

    C.display();
    C.show();
    C.getData();

    return 0;
}
