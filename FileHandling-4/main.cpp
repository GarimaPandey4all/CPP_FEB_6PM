#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char str[100]; // String
//    string str;

    ofstream outfile("test.txt", ios::app);

    cout<<"Enter any value:";
    gets(str);
//    getline(cin, str);

    outfile<<str;

    outfile.close();

    return 0;
}
