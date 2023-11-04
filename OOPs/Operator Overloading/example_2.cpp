#include <iostream>

using namespace std;

class Time
{
    int hour;
    int minute;

    public:
        Time(int hr, int min) : hour(hr), minute(min) {}

        void operator++()
        {
            minute++;

            if(minute >= 60)
            {
                hour++;
                minute -= 60;
            }
        }

        void operator++(int)
        {
            minute++;

            if(minute >= 60)
            {
                hour++;
                minute -= 60;
            }
        }

        void operator--()
        {
            minute--;

            if(minute < 0)
            {
                hour--;
                minute = 59;
            }
        }

        void operator--(int)
        {
            minute--;

            if(minute < 0)
            {
                hour--;
                minute = 59;
            }
        }

        void display()
        {
            cout<<hour<<":"<<minute<<endl;
        }
};

int main()
{
    Time t(6, 30);
    t.display();

    ++t;
    t.display();

    t++;
    t.display();

    --t;
    t.display();

    t--;
    t.display();

    return 0;
}
