#include <stdio.h>

struct Company
{
    char *name;
    int age;
    int salary;
};

void input(struct Company *ptr)
{
    scanf("%s %d %d", &(ptr->name), &(ptr->age), &(ptr->salary));
}

void output(struct Company emp)
{
    printf("\nEmployee Name : %s\n", emp.name);
    printf("Employee Age : %d\n", emp.age);
    printf("Employee Salary : %d\n", emp.salary);
}

int main(int argc, char *argv[])
{
    struct Company emp;
    input(&emp);
    output(emp);
    
    return 0;
}