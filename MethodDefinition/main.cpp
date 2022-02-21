#include <iostream>

using namespace std;

class Demo
{
private:
    int age;
    string name;

public:

    Demo(int, string);

//    Demo(int age, string name);
//    {
//        this->age = age;
//        this->name = name;
//    }

    void display(); // function declaration

};

Demo :: Demo(int age, string name)
{
    this->age = age;
    this->name = name;
}


//: - inheritance
//::- scope resolution operator

void Demo :: display()
{
    cout<<age<<" "<<name;
}

int main()
{
    Demo obj(25, "Ram");

    obj.display();

    return 0;
}
