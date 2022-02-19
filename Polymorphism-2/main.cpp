#include <iostream>

using namespace std;
//
//Function Overriding: - When parent feature is outdated or we want to
//hide the parent feature.
//
//    - Must be inheritance
//    - Function signature must be same
//    e.g: void roi() in parent, it is same as in child class as well (void roi())

class Parent {
public:
    void show()
    {
        cout<<"Parent Show Method"<<endl;
    }
};

class Child : public Parent {

public:
    //Override
    void show()
    {
        cout<<"Child Show Method"<<endl;
    }
};

int main()
{
    Parent p;
    Child obj;

    obj.show();
    obj.show();

    p.show();

    return 0;
}
