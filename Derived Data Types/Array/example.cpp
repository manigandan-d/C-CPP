#include <iostream>

using namespace std;

int main()
{
    int n, i;

    cout<<"Enter the Number of Elements : ";
    cin>>n;

    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}
