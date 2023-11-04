#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    int **d_ptr = &ptr;

    cout<<a<<endl;
    cout<<*ptr<<endl;
    cout<<**d_ptr<<endl;

    return 0;

}
