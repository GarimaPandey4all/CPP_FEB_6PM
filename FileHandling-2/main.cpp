#include <iostream>
#include <fstream> // file stream

//Stream: flow of data

using namespace std;

int main()
{
    //write data in a file

    ofstream outfile("file.txt", ios::app); // app: append mode

    outfile<<"Pranshu and Harsh"<<endl;
    outfile<<"Welcome to Brain Mentors"<<endl;

    outfile.close();

    return 0;
}
