#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};

    int *p = arr;
    int *q = arr+2;

    p = p+2;
    cout<<p<<endl;

    p = p-2;
    cout<<p<<endl;

    cout<<q-p<<endl;

    p++;
    cout<<p<<endl;

    p--;
    cout<<p<<endl;

    if(p == q)
    {
        cout<<"Both pointing to the same location"<<endl;
    }

    else
    {
        cout<<"Both pointing to the different location"<<endl;
    }

    return 0;

}
