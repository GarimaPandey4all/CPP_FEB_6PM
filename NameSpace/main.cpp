#include <iostream>

using namespace std;

//namespace: It is used to provide scope

namespace first {
    int value = 500;
}

namespace second {

    int x = 600;

    int func()
    {
        return x;
    }
}

//Global Variable
//int value = 500;

int main()
{
    //local variable
    int value = 400;

    cout<<value<<endl;
    cout<<first::value<<endl;
    cout<<second::func()<<endl;

    //std::cout << "Hello world!" << std::endl;
    //cout<<"Hello World"<<endl;
    return 0;
}
