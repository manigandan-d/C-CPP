#include<iostream>

using namespace std;

class Demo
{
    int a;
    char ch;

    public:
        Demo();

        void display();

};

Demo::Demo()
{
    a = 10;
    ch = 'A';
}

void Demo::display()
{
    cout<<a<<endl;
    cout<<ch<<endl;
}

int main()
{

    Demo d;
    d.display();

    return 0;
}
