#include <iostream>

using namespace std;

//function template
template <class T>
void add(T a, T b)
{
    cout<<"Addition is: "<<(a + b)<<endl;
}

int main()
{
    add(10, 30);
    add(45.6f, 56.7f);
    add(45.67, 56.79);

    return 0;
}
