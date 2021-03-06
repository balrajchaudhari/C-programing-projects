#include<stdio.h>
#include<stdlib.h>


struct Employee
{
    int id;
    int salary;
};

int main(void)
{
    struct Employee e;
    e.id=1;
    e.salary=50000;

    struct Employee *ptr=&e; // pointer variable of type struture 
    //pointer is pointing to address of structure variable e

    printf("\n Accessing the data using structure variable dot operator is used");
    printf("\n ID : %d Salary : %d",e.id,e.salary);

    printf("\n Accessing the data using structure pointer variable arrow operator is used");
    printf("\n ID : %d Salary : %d",ptr->id,ptr->salary);
    

    return 0;
}

/*
struct Date
{
    int dd;
    int mm;
    int yy;
};

struct Date accept(); //function is returning a structure 
void disp(struct Date d); //function is taking argument as a structure

int main(void)
{
    struct Date d;
    d=accept();
    disp(d);

    return 0;
}


struct Date accept()
{
    struct Date dt;
    printf("Enter DATE :");
    scanf("%d",&dt.dd);

    printf("Enter Month :");
    scanf("%d",&dt.mm);
    
    printf("Enter Year :");
    scanf("%d",&dt.yy);

    return dt;
    
}
void disp(struct Date d)
{
    printf("%d-%d-%d",d.dd,d.mm,d.yy);
}

*/




/*

typedef struct
{
    int num1;
    int num2;
}ST;
int main(void)
{
    ST s;
    s.num1=10;
    s.num2=20;
    printf("%d %d",s.num1,s.num2);
    return 0;
}
*/




/*
struct //Anonymous structure
{
    int num1;
    int num2;
}v1; //incase of anonymous structure we create variable at the time of structure declaration

int main(void)
{
    
    v1.num1=10;
    v1.num2=20;
    printf("%d %d",v1.num1,v1.num2);
    return 0;
}
*/


/*
typedef struct Employee
{
    int id;
    int salary;
}EMP;

//struct Employee is real name
//EMP is nick name

int main(void)
{
    struct Employee e1; //e1 is created using real name 
    e1.id=1;
    e1.salary=60000;

    EMP e2; //e2 is created using nick name
    e2.id=2;
    e2.salary=50000;

    printf("%d %d",e1.id,e2.id);



    return 0;
}
*/