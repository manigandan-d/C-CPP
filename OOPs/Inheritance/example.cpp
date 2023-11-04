#include <iostream>

using namespace std;

class Employee
{
    int empID;
    string name;
    double salary;

    public:
        Employee(int id, string n, double s=0) : empID(id), name(n), salary(s) {}

        void setSalary(double s)
        {
            salary = s;
        }

        void display()
        {
            cout<<empID<<endl;
            cout<<name<<endl;
            cout<<salary<<endl;
        }
};

class PartTimeEmployee : public Employee
{
    int workHours;

    public:
        PartTimeEmployee(int id, string n, int workHrs) : Employee(id, n), workHours(workHrs)
        {
            setSalary();
        }

        void setSalary()
        {
            Employee::setSalary(workHours * 200);
        }

        void display()
        {
            Employee::display();
            cout<<workHours<<endl;
        }
};

int main()
{
    Employee e1(1, "Mani", 100000);
    e1.display();

    cout<<endl;

    PartTimeEmployee pe1(1, "Keerai", 250);
    pe1.display();

    cout<<endl;

    PartTimeEmployee pe2(2, "Anbu", 150);
    pe2.display();

    return 0;
}
