#include <iostream>

using namespace std;

class HelloWorld {

//    1. Class variables/Instance Variables/Data Members
//    2. Class Methods / Member Functions

//access modifier / specifier
//    1. private (by default)
//    2. public
//    3. protected, inheritance

public:

    void show()
    {
        cout<<"Hello World";
    }

};

int main()
{
    HelloWorld h; // object creation

    h.show();

    return 0;
}
