#include<iostream>

using namespace std;

class Demo
{
    int a;
    char ch;

    public:
        Demo(int, char);
        Demo(Demo *);
        Demo(Demo &);

        void display();

};

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
}

int main()
{

    Demo d1(10, 'A');
    d1.display();

    Demo d2 = d1;
    d2.display();
    
    Demo d3(&d1);
    d3.display();

    Demo d4(d1);
    d4.display();

    return 0;
}
