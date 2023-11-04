#include<iostream>

using namespace std;

class Demo
{
    int a;
    char ch;

    public:
        Demo();
        Demo(int);
        Demo(char);
        Demo(int, char);
        Demo(Demo *);
        Demo(Demo &);

        void display();

};

Demo::Demo()
{
    a = 10;
    ch = 'A';
}

Demo::Demo(int x)
{
    a = x;
    ch = 'A';
}

Demo::Demo(char y)
{
    a = 10;
    ch = y;
}

Demo::Demo(int x, char y)
{
    a = x;
    ch = y;
}

Demo::Demo(Demo *ptr)
{
    a = ptr->a;
    ch = ptr->ch;
}

Demo::Demo(Demo &ref)
{
    a = ref.a;
    ch = ref.ch;
}

void Demo::display()
{
    cout<<a<<endl;
    cout<<ch<<endl;
    cout<<endl;
}

int main()
{
    Demo d1;
    d1.display();

    Demo d2(10);
    d2.display();

    Demo d3('A');
    d3.display();

    Demo d4(10, 'A');
    d4.display();
    
    Demo d5(&d1);
    d5.display();

    Demo d6(d1);
    d6.display();

    return 0;
}
