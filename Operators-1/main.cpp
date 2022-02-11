#include <iostream>

using namespace std;

//Operators:
//
//    1. Arithmetic
//    2. Relational or Comparison
//    3. Logical
//    4. Assignment

int main()
{
    int a, b;

//    Arithmetic Operators
//        +, -, /, *,% (Modulus), ++ (Increment), -- (Decrement)

    cout<<"Enter value for a and b:";
    cin>>a>>b;

    //a = 4, b = 5

    cout<<"Modulus is: "<<(a % b)<<endl; // 4
    cout<<"Pre - Increment is: "<<(++a)<<endl; // a = 4, 4+1 = 5 = a
    cout<<"Post - Increment is: "<<(a++)<<endl; // a = 5
    cout<<"a is: "<<a<<endl; // 6
    cout<<"Pre - Decrement is: "<<(--a)<<endl; // a = 6 - 1 = 5
    cout<<"Post - Decrement is: "<<(a--)<<endl; //a = 5
    cout<<"a is: "<<a<<endl;

    return 0;
}
