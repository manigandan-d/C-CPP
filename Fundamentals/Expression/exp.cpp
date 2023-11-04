#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    a = b = c = 10;

    cout<<a<<" "<<b<<" "<<c<<endl;

    a = b + (c = 10);

    cout<<a<<" "<<b<<" "<<c<<endl;

    a += 10;

    cout<<a<<endl;

    return 0;
}
