#include<iostream>

using namespace std;

class Demo
{
    public:
        Demo();

        ~Demo();

};

Demo::Demo()
{
    cout<<"Constructor Called"<<endl;
}

Demo::~Demo()
{
    cout<<"Destructor Called"<<endl;
}

int main()
{

    Demo d;

    return 0;
}
