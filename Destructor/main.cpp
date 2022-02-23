#include <iostream>

using namespace std;

class Practice {

private:

    int a;

public:

    Practice(int a)
    {
        this->a = a;
    }

    void display()
    {
        cout<<a<<endl;
    }

    //Destructor
    ~Practice()
    {
        cout<<"Destructor";
    }

};

int main()
{
    Practice obj(100); // called Param Cons

    obj.display();

    return 0;
}
