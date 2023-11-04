#include <iostream>

using namespace std;

class Grandpa
{
    public:
        void ability()
        {
            cout<<"Teacher"<<endl;
        }
};

class Dad : public Grandpa
{
    public:
        void ability()
        {
            cout<<"Business Man"<<endl;
            Grandpa::ability();
        }
};

class Mom
{
    public:
        void ability()
        {
            cout<<"Chef"<<endl;
        }
};

class Myself : public Dad, public Mom
{
    public:
        void ability()
        {
            cout<<"Engineer"<<endl;
            Dad::ability();
            Mom::ability();
        }
};

int main()
{
    Myself mani;

    mani.ability();

    return 0;
}
