#include <iostream>

using namespace std;

int n = 5;

int main()
{
    int *arr = new int[n];
    int i;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    delete[] arr;

    return 0;
}
