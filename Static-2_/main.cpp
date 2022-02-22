#include <iostream>

using namespace std;

class Demo {

public:

//  static method called without class's object
    static void func()
    {
        cout<<"This is a Static method"<<endl;
    }

};


int main()
{
    Demo::func();

    return 0;
}
