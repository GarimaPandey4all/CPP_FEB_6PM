#include<iostream.h>
#include<conio.h>
//#include<string.h>

//using namespace std;

void main()
{
	int a = 10; // 2 bytes
	float b = 56.7f;  //4 bytes
	double c = 34.89; //8 bytes
	char d = 'I';
       //	string str;
	clrscr();

	//cout<<"Enter a String:";
	//cin>>name;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;

	cout<<sizeof(a);

	getch();
}