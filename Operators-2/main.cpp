#include <iostream>

using namespace std;

//Relational or Comparison

//    ==, !=, >, <, >=, <=

int main()
{
    int a, b;

    cout<<"Enter value for a and b:";
    cin>>a>>b;

    cout<<"Equal to:"<<(a == b)<<endl;
    cout<<"Not Equal to:"<<(a != b)<<endl;
    cout<<"Greater than:"<<(a > b)<<endl;
    cout<<"Less than:"<<(a < b)<<endl;
    cout<<"Greater than and Equal to:"<<(a >= b)<<endl;
    cout<<"Less than and Equal to:"<<(a <= b)<<endl;

    return 0;
}
