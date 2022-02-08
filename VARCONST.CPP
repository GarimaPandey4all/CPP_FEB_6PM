#include<iostream.h>
#include<conio.h>

void main()
{
//	a, b: variable - container: vary or change
  //	int: data type
//  	constant: fixed value

	int a, b;
	const float pi = 3.14f;
	clrscr();

	cout<<"Enter value for a and b:";
	cin>>a>>b; // to take user input at runtime

	cout<<"Add "<<(a + b)<<" "<<pi<<endl;

	a = 50;
	b = 100;

	cout<<"Add "<<(a + b)<<endl;

	getch();
}