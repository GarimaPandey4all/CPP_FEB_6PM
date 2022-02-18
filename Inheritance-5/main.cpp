#include <iostream>

using namespace std;

//Hybrid = Multiple + Heirarchical

class Parent1 { // Parent , Super , Base
public:
    void show()
    {
        cout<<"Parent1 Class"<<endl;
    }
};

class Parent2 { // Parent , Super , Base
public:
    void showData()
    {
        cout<<"Parent2 Class"<<endl;
    }
};

class Child1 : public Parent1 { // Parent , Super , Base
public:
    void getData()
    {
        cout<<"Child1 Class"<<endl;
    }
};

//Multiple and Heirarchical
class Child2 : public Parent1, public Parent2 {  // Inheritance

public:
    void display()
    {
        cout<<"Child2 Class"<<endl;
    }
};

int main()
{
    Child1 C1;
    Child2 C2;

    C1.getData();
    C1.show();

    C2.display();
    C2.show();
    C2.showData();

    return 0;
}
