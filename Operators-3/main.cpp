#include <iostream>

using namespace std;

//Logical

//    &&, ||, !

int main()
{
    int a, b;

    cout<<"Enter value for a and b:";
    cin>>a>>b;

    //a = 5, b = 4
//                        (0 && 1) = 0 = false
    cout<<"AND Logical:"<<(a > 10 && b < 20)<<endl;
//                            (0 || 1) = 1 = true
    cout<<"OR Logical:"<<(a > 10 || b < 20)<<endl;
//                        0 = false = 1
    cout<<"NOT Logical:"<<!(a > 10 && b < 20)<<endl;

    return 0;
}
