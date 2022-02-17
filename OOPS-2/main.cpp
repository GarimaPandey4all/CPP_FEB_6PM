#include <iostream>

using namespace std;

class Demo
{
public:
    int a, b;

    void setData() // instance variable initialize
    {
        cout<<"Enter any value for a and b:";
        cin>>a>>b;

//        a = 10;
//        b = 20;
    }

    void getData() // void - return type of the function, no return
    {
        cout<<(a + b)<<endl;
    }

};

int main()
{
    Demo d;
    d.setData();
    d.getData();

    return 0;
}
