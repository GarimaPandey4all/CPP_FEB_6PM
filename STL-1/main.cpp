#include <iostream>
#include <array>

using namespace std;

//STL: Standard Template Library: Predefined Classes
//
//1. Container: Predefined Classes
//2. Algorithm: Action or Operation or Function
//3. iterator: Iteration or loop

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    array<int, 5> arr1 = {10, 20, 30, 40, 50};

//    [] - subscript operator
    cout<<arr[0]<<endl;

    //at(3)
    cout<<arr.at(3)<<endl;

    //front()
    cout<<arr.front()<<endl;

    //back()
    cout<<arr.back()<<endl;

    //fill()
    arr.fill(50);

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    //swap
    arr.swap(arr1);

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    cout<<arr.size()<<endl;
    cout<<arr1.size()<<endl;

    return 0;
}
