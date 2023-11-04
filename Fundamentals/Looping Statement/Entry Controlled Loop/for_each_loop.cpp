#include<iostream>

#define MAX 5

using namespace std;

int main()
{
    int arr[MAX] = {1, 2, 3, 4, 5};

    for(auto i : arr)
    {
        cout<<i<<endl;
    }

    return 0;
}
