#include <iostream>

using namespace std;

class Demo
{
    int a;

    public:
        Demo(int x) : a(x) {} // explicit Demo(int x) : a(x) {}

        void display()
        {
            cout<<a<<endl;
        }

};

void fun(Demo d)
{
    d.display();
}

int main()
{
    Demo d1(10);
    d1.display();

    Demo d2 = 20; // Demo d2 = Demo(20);
    d2.display();

    fun(d1);

    fun(20); // fun(Demo(20));

    return 0;
}
