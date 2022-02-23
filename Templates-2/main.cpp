#include <iostream>

using namespace std;

template <class T>
class Calculator {

private:
    T a, b;

public:

    void setData(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    void getData()
    {
        cout<<"Add "<<(a + b)<<endl;
        cout<<"Sub "<<(a - b)<<endl;
        cout<<"Mul "<<(a * b)<<endl;
        cout<<"Div "<<(a / b)<<endl;
    }
};

int main()
{
    Calculator<int> obj;
    obj.setData(30, 50);
    obj.getData();

    cout<<"**********************"<<endl;

    Calculator<float> obj2;
    obj2.setData(30.56f, 50.78f);
    obj2.getData();

    cout<<"**********************"<<endl;

    Calculator<double> obj3;
    obj3.setData(30.35, 50.89);
    obj3.getData();

    return 0;
}
