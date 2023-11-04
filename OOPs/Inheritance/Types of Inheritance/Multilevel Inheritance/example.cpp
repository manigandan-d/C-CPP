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

class Myself : public Dad
{
    public:
        void ability()
        {
            cout<<"Engineer"<<endl;
            Dad::ability();
        }
};

int main()
{
    Myself mani;

    mani.ability();

    return 0;
}
