#include<iostream>

using namespace std;

int main()
{
    int a, b, c;

    a = 5;
    b = 10;
    c = 15;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greater than b & c"<<endl;
        }

        else
        {
            cout<<"c is greater than a & b"<<endl;
        }
    }

    else
    {
        if(b>c)
        {
            cout<<"b is greater than a & c"<<endl;
        }

        else
        {
            cout<<"c is greater than a & b"<<endl;
        }
    }

    return 0;
}
