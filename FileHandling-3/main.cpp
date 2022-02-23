#include <iostream>
#include <fstream> // file stream

//Stream: flow of data

using namespace std;

int main()
{
    //read data from the file
    char ch;

    ifstream infile("file.txt", ios::in); // in: input/read mode

    while(infile)
    {
        infile.get(ch);
        cout<<ch;
    }

    infile.close();

    return 0;
}
