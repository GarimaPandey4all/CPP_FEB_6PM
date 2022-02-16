#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter any number to be print the table:";
    cin>>n;

    int i = 1;

    do {
        cout<<n<<" * "<<i<<" = "<<n * i<<endl;
        i++;
    }while(i <= 10);

//    while(i <= 10)
//    {
//        cout<<n<<" * "<<i<<" = "<<n * i<<endl;
//        i++;
//    }


//    for(int i = 1; i <= 10; i++)
//    {
//        cout<<n<<" * "<<i<<" = "<<n * i<<endl;
//    }

    return 0;
}
