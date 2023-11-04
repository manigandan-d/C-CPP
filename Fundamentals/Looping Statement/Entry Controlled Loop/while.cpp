#include<iostream>

#define MAX 5

using namespace std;

int main()
{
    int arr[MAX] = {1, 2, 3, 4, 5};

    int i = 0;

    while(i<MAX)
    {
        cout<<arr[i]<<endl;
        i++;
    }

    return 0;
}
