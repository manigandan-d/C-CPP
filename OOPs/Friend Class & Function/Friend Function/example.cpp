#include <iostream>

using namespace std;

class Demo
{
    int a;

    public:
        Demo(int x = 0) : a(x) {}

        friend void setData(Demo &, int);

        void display()
        {
            cout<<a<<endl;
        }

};

void setData(Demo &ref, int x)
{
    ref.a = x;
}

int main()
{
    Demo d;

    setData(d, 10);

    d.display();

    return 0;
}
