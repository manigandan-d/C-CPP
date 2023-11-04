#include <iostream>

using namespace std;

class Demo
{
    int a;
    char ch;

    public:
        Demo(int, char);

        void display() const;
};

Demo::Demo(int x, char y)
{
    a = x;
    ch = y;
}

void Demo::display() const
{
    cout<<a<<endl;
    cout<<ch<<endl;
}

int main()
{
    const Demo d(10, 'A');
    d.display();

    return 0;
}
