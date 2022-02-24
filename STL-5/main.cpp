#include <iostream>
#include <vector>

using namespace std;

//vector provide the concept that overcome below problems
//- lack of memory
//- wastage of memory

int main()
{
    vector <int> v1;

    cout<<"Size is: "<<v1.size()<<endl; // 0
    cout<<"Capacity is: "<<v1.capacity()<<endl; // 0

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(10 * (i + 1)); // Capacity: 0, 1, 2, 4, 8, 16
    }

    cout<<"Size is: "<<v1.size()<<endl; // 10
    cout<<"Capacity is: "<<v1.capacity()<<endl; // 10

    for(int i = 0; i < v1.size(); i++) // v1.size(): 10
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}
