#include <iostream>

using namespace std;

class Demo
{
    int a;
    char ch;

    public:
        friend istream &operator>>(istream &, Demo &);

        friend ostream &operator<<(ostream &, Demo &);

};

istream &operator>>(istream &input, Demo &ref)
{
    input>>ref.a>>ref.ch;

    return input;
}

ostream &operator<<(ostream &output, Demo &ref)
{
    output<<ref.a<<endl;
    output<<ref.ch<<endl;

    return output;
}

int main()
{
    Demo d;

    cin>>d;

    cout<<d;

    return 0;
}
