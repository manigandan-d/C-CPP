#include <stdio.h>

struct 
{
    char *name;
    int age;
    int salary;
}emp1, emp2;

void manager()
{
    struct 
    {
        char *name;
        int age;
        int salary;
    }manager;

    manager.name = "Keerai";
    manager.age = 22;
    manager.salary = 100000;

    printf("\nManager Name : %s\n", manager.name);
    printf("Manager Age : %d\n", manager.age);
    printf("Manager Salary : %d\n", manager.salary);

}

int main()
{
    emp1.name = "Mani";
    emp1.age = 20;
    emp1.salary = 50000;

    emp2.name = "Anbu";
    emp2.age = 18;
    emp2.salary = 40000;

    printf("\nEmployee 1 Name : %s\n", emp1.name);
    printf("Employee 1 Age : %d\n", emp1.age);
    printf("Employee 1 Salary : %d\n", emp1.salary);

    printf("\nEmployee 2 Name : %s\n", emp2.name);
    printf("Employee 2 Age : %d\n", emp2.age);
    printf("Employee 2 Salary : %d\n", emp2.salary);

    manager();
    
    return 0;
}