#include <iostream>
#include <vector>

using namespace std;

//vector: It supports dynamic/runtime array
//vector can provide memory flexibility

int main()
{
    vector<int> v1;

    cout<<"Current Capacity is: "<<v1.capacity()<<endl;  // 0

    vector <int> v2 {10, 20, 30};

    cout<<"Current Capacity is: "<<v2.capacity()<<endl; // 3

    return 0;
}
