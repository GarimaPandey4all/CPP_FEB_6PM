#include <iostream>

using namespace std;

//Heirarchical
//
//        P
//
//    C1      C2
//
//C11     C12


class Parent { // Parent , Super , Base
public:
    void show()
    {
        cout<<"Parent Class"<<endl;
    }
};

class Child1 : public Parent { // Parent , Super , Base
public:
    void getData()
    {
        cout<<"Child1 Class"<<endl;
    }
};

//Child , Sub , Derived
class Child2 : public Parent {  // Inheritance

public:
    void display()
    {
        cout<<"Child2 Class"<<endl;
    }
};

int main()
{
    Child1 C1;
    Child2 C2;

    C1.getData();
    C1.show();

    C2.display();
    C2.show();

    return 0;
}
