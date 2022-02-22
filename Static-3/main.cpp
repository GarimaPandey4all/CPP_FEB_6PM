#include <iostream>

using namespace std;

void func()
{
    static int counter; // 0, static variable default value is zero
    cout<<"Counter is: "<<counter++<<endl;
}

int main()
{
    func();
    func();


//    for(int i = 1; i <= 10; i++)
//    {
//        func();
//    }

    return 0;
}
