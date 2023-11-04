#include<iostream>

#define MAX 5

using namespace std;

int main()
{
    int arr[MAX] = {1, 2, 3, 4, 5};

    int i = 0;

    for(i=0; i<MAX; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
