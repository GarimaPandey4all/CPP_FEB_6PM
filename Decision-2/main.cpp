#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout<<"Enter value for a, b, c:";
    cin>>a>>b>>c;

    if(a > b && a > c)
    {
        cout<<"A is Greater";
    }
    else if(b > c)
    {
        cout<<"B is Greater";
    }
    else {
        cout<<"C is Greater";
    }

    return 0;
}
