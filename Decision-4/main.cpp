#include <iostream>

using namespace std;

int main()
{
//    int n = 11;

    int a = 100, b = 50, c = 50;

//    ternary: 3, ?:
//
//    (condition) ? true : false;

    //(n % 2 == 0) ? cout<<"Number is Even": cout<<"Number is Odd";

    (a > b && a > c) ? cout<<"A is Greater" : ((b > c) ? cout<<"B is Greater" : cout<<"C is Greater" );

    return 0;
}
