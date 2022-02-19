#include <iostream>

using namespace std;

//complex number
//
//10 + i9;
//13 + i8;
//23 + i17;

class Complex {

private:
    int real, imag;

public:

    //default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    //parameterized constructor
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;

        temp.real = real + obj.real; // 23
        temp.imag = imag + obj.imag; // 17

        return temp;
    }

    void print()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};

int main()
{
    Complex obj1(10, 9);
    Complex obj2(13, 8);

    Complex obj3;

    obj3 = obj1 + obj2;

    obj3.print();

    return 0;
}
