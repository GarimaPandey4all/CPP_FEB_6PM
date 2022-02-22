#include <iostream>

using namespace std;

class Example
{
private:
    int age;
    static int marks;

public:
    void setData(int age)
    {
       this->age = age;
    }

    void getData(){

        cout<<age<<" "<<marks<<endl;
    }
};

int Example :: marks = 575; // static variable initialization outside the class

int main()
{
    Example e;

    e.setData(25);
    e.getData();

    return 0;
}
