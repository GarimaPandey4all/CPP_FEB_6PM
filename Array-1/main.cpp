#include <iostream>

using namespace std;
//
//array: collection of similar types of data
//homogeneous mixture

int main()
{
//    5: 0 to 4(index number in the array)
    int a[5] = {1, 2, 3, 5, 6}; // array declare
    // 5: size of the array

//    cout<<"first value:"<<a[0]<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
