#include <iostream>

using namespace std;

int main()
{
    int *a = new int(10);

    // *a = 10;

    cout<<*a<<endl;

    delete a;

    a = NULL;

    return 0;
}
