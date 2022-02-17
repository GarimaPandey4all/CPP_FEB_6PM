#include <iostream>

using namespace std;

class Sub {

public:
    int a, b;

    void display()
    {
        cout<<a<<" "<<b<<" = "<<(a - b)<<endl;
    }

};

int main()
{
    Sub s;

    s.a = 10;
    s.b = 5;

    s.display();

    return 0;
}
