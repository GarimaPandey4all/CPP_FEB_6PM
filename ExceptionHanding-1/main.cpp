#include <iostream>

using namespace std;

//Exception Handling:
//
//    Exception: Abnormal Condition or runtime error
//    - Abnormal condition which terminates program flow
//
//    e = 100 / 0 = inifinite
//    e

int main()
{
    //int a = 11;
    float a = 3.14f;

    //try means guarded region
    try {
        if(a == 11)
        {
            throw 11; // Exception throw
        }
        if(a == 3.14f)
        {
            throw 3.14f;
        }
    }
    //exception handling code
    catch(int e)
    {
        cout<<"Exception "<<e<<" is here"<<endl;
    }
    catch(float e)
    {
        cout<<"Exception "<<e<<" is here"<<endl;
    }


    return 0;
}
