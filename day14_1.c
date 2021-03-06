#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//nested structure
struct Employee
{
    int id;
    char name[20];
    struct
    {
        int dd;
        int mm;
        int yy;
    }d;
};

int main(void)
{
        struct Employee emp;
        emp.id=1;
        strcpy(emp.name,"Akshita");
        emp.d.dd=17;
        emp.d.mm=12;
        emp.d.yy=2020;

        printf("ID : %d Name : %s",emp.id,emp.name);
        printf(" \n DATE :%d-%d-%d",emp.d.dd,emp.d.mm,emp.d.yy);
       
}