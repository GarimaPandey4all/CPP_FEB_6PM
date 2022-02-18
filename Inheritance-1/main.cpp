#include <iostream>

using namespace std;

//Inheritance: Parent - Child Relationship
//- communicate between classes
//
//Types:
//
//    1. Single
//    2. Multiple
//    3. Multilevel
//    4. Heirarchical
//    5. Hybrid: any two type of combination

// Single: Parent - Child

class Parent { // Parent , Super , Base
public:
    void show()
    {
        cout<<"Parent Class"<<endl;
    }
};

//Child , Sub , Derived
class Child : public Parent {  // Inheritance

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

    return 0;
}
