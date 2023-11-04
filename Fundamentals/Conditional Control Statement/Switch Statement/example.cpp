#include <iostream>

using namespace std;

int main()
{
    int a, b, ch;

    a = 5;
    b = 10;

    cout<<"Enter Your Choice : ";
    cin>>ch;

    switch (ch)
    {
        case 0:
            cout<<a+b<<endl;
            break;

        case 1:
            cout<<a-b<<endl;
            break;
        
        case 2:
            cout<<a*b<<endl;
            break;

        case 3:
            cout<<a/b<<endl;
            break;

        default:
            cout<<"Pls Enter the Valid Choice"<<endl;
            break;
    }

    return 0;
}
