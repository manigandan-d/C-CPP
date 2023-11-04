#include <iostream>

using namespace std;

void fun(int a[], int n)
{
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
}

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};

    fun(arr, 5);

    return 0;
}
