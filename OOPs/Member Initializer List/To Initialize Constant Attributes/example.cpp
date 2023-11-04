#include <iostream>

using namespace std;

class Demo
{
    int regVar;
    const int constVar;

    public:
        Demo(int x, int y) : regVar(x), constVar(y) {}

        void display()
        {
            cout<<regVar<<endl;
            cout<<constVar<<endl;
        }
};

int main()
{
    Demo d(10, 20);
    d.display();

    return 0;
}
