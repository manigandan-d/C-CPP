#include <iostream>

using namespace std;

class Date
{
    int day, month, year;

    public:
        Date(int d, int m, int y) : day(d), month(m), year(y) {}

        void printDate()
        {
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }

};

class Student
{
    string name;
    Date dob;

    public:
        Student(string n, int d, int m, int y) : name(n), dob(d, m, y) {}

        void display()
        {
            cout<<name<<endl;
            dob.printDate();
            cout<<endl;
        }
};

int main()
{
    Student s1("Mani", 22, 6, 2001);
    s1.display();

    Student s2("Keerai", 9, 9, 1999);
    s2.display();

    Student s3("Anbu", 16, 11, 2003);
    s3.display();

    return 0;
}
