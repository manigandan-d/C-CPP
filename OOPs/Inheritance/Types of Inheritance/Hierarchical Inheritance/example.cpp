#include <iostream>

using namespace std;

class Dad
{
    public:
        void ability()
        {
            cout<<"Business Man"<<endl;
        }
};

class Akka : public Dad
{
    public:
        void ability()
        {
            cout<<"Computer Science Engineer"<<endl;
            Dad::ability();
        }
};

class Nephew1 : public Akka
{
    public:
        void ability()
        {
            cout<<"App Developer"<<endl;
            Akka::ability();
        }
};

class Niece1 : public Akka
{
    public:
        void ability()
        {
            cout<<"Singer"<<endl;
            Akka::ability();
        }  
};

class Myself : public Dad
{
    public:
        void ability()
        {
            cout<<"IOT Engineer"<<endl;
            Dad::ability();
        }
};

class Son : public Myself
{
    public:
        void ability()
        {
            cout<<"Embedded Engineer"<<endl;
            Myself::ability();
        }
};

class Daughter : public Myself
{
    public:
        void ability()
        {
            cout<<"Social Service"<<endl;
            Myself::ability();
        }  
};

class Thambi : public Dad
{
    public:
        void ability()
        {
            cout<<"Mechanical Engineer"<<endl;
            Dad::ability();
        }
};

class Nephew2 : public Thambi
{
    public:
        void ability()
        {
            cout<<"Web Developer"<<endl;
            Thambi::ability();
        }
};

class Niece2 : public Thambi
{
    public:
        void ability()
        {
            cout<<"Dancer"<<endl;
            Thambi::ability();
        }  
};

int main()
{
    Myself mani;

    mani.ability();

    return 0;
}
