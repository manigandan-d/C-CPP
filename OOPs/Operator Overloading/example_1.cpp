#include <iostream>

using namespace std;

class Demo
{
    int a;

    public:
        Demo(int x) : a(x) {}

        int operator+(Demo &ref)
        {
            return this->a + ref.a;
        }

};

int main()
{
    Demo d1(10);
    Demo d2(5);

    cout<<d1+d2<<endl;

    return 0;
}
