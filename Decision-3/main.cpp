#include <iostream>

using namespace std;

//switch: menu driven program

int main()
{
    int choice;
    int a, b;

    while(1) // always true : infinite loop
    {
        cout<<endl<<"***********Calculator***************"<<endl;
        cout<<"Press 1. Addition"<<endl;
        cout<<"Press 2. Subtraction"<<endl;
        cout<<"Press 3. Division"<<endl;
        cout<<"Press 4. Multiplication"<<endl;
        cout<<"Press 5. Exit"<<endl;
        cout<<"\n\nEnter your choice:"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter value for a and b:";
            cin>>a>>b;

            cout<<"Addition is: "<<(a + b)<<endl;
            break;

        case 2:
            cout<<"Enter value for a and b:";
            cin>>a>>b;

            cout<<"Subtraction is: "<<(a - b)<<endl;
            break;

        case 3:
            cout<<"Enter value for a and b:";
            cin>>a>>b;

            cout<<"Division is: "<<(a / b)<<endl;
            break;

        case 4:
            cout<<"Enter value for a and b:";
            cin>>a>>b;

            cout<<"Multiplication is: "<<(a * b)<<endl;
            break;

        case 5:
            exit(0); // exit the program

        default:
            cout<<"Invalid Choice";
        }
    }


    return 0;
}
