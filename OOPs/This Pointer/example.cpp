#include <iostream>

using namespace std;

class Demo
{
    int a;

    public:
        Demo(int a)
        {
            this->a = a;
        }

        void display()
        {
            cout<<a<<endl;
        }
};

int main()
{
    Demo d(10);
    d.display();

    return 0;
}
