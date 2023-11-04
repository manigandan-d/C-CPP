#include<iostream>

using namespace std;

class Demo
{
    int a;
    char ch;

    public:
        Demo(int, char);

        void display();

};

Demo::Demo(int x = 10, char y = 'A')
{
    a = x;
    ch = y;
}

void Demo::display()
{
    cout<<a<<endl;
    cout<<ch<<endl;
}

int main()
{
    Demo d1;
    d1.display();

    Demo d2(10, 'A');
    d2.display();

    return 0;
}
