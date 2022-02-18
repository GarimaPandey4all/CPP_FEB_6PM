#include <iostream>

using namespace std;

//Multilevel
//
//    A, P
//
//    B, C1
//
//    C, C2


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
class Child2 : public Child1 {  // Inheritance

public:
    void display()
    {
        cout<<"Child2 Class"<<endl;
    }
};

int main()
{
    Child2 C2;

    C2.display();
    C2.getData();
    C2.show();

    return 0;
}
