#include <iostream>

using namespace std;

void func()
{
    int age = 18;

    if(age > 18)
    {
        cout<<"Age Limit is Fine"<<endl;
    }
    else {
        throw 18;
    }
}

int main()
{
    try {

        func();
    }
    catch(int e)
    {
        cout<<"Age Limit is not fine"<<endl;
    }

    return 0;
}
