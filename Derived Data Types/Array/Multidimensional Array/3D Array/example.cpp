#include <iostream>

using namespace std;

int main()
{
    int x=2, y=2, z=2;

    int i, j, k;

    int arr[x][y][z] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            for(k=0; k<z; k++)
            {
                cout<<arr[i][j][k]<<" ";
            }
        }
    }

    return 0;

}
