#include <iostream>

using namespace std;

class Parent {

protected:
    int rollno;
};

class Child : public Parent {

public:
    Child()
    {
        rollno = 101;
    }

    void display()
    {
        cout<<rollno<<endl;
    }
};

int main()
{
    Child obj;

    obj.display();

    return 0;
}
