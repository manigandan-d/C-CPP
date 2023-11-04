#include <iostream>

using namespace std;

class Demo
{
    int a;
    char ch;

    public:
        Demo(int x, char y) : a(x), ch(y) {}

        void display()
        {
            cout<<a<<endl;
            cout<<ch<<endl;
        }
};

int main()
{
    Demo d(10, 'A');
    d.display();

    return 0;
}
