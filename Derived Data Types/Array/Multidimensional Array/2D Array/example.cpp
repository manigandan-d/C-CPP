#include <iostream>

using namespace std;

int main()
{
    int rows=3, cols=3;

    int i, j;

    int arr[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;

}
