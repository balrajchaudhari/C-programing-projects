#include<stdio.h>
#include<stdlib.h>


struct Student
{
    int rn;
    int marks;
    char grade;
};
int main(void)
{
    struct Student s[5]; //array of structure 
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter Roll no:");
        scanf("%d",&s[i].rn);
        printf("Enter Marks: ");
        scanf("%d",&s[i].marks);
        printf("Enter Grade:");
        scanf("%*c");
        scanf("%c",&s[i].grade);
    }
    for(i=0;i<5;i++)
    {
        printf("\n %d %d %c",s[i].rn,s[i].marks,s[i].grade);
    }

    return 0;
}


/*
struct Student
{
    int rn;
    int marks;
    char grade;
}s1;
int main(void)
{
    printf("Enter Roll no:");
    scanf("%d",&s1.rn);
    printf("Enter Marks: ");
    scanf("%d",&s1.marks);
    printf("Enter Grade:");
    scanf("%*c");
    scanf("%c",&s1.grade);
    
    printf("Rollno : %d Marks : %d Grade : %c",s1.rn,s1.marks,s1.grade);
    return 0;
    
}
*/




/*

struct Student
{
    int rn;
    int marks;
    char grade;
}s1,s2;

int main(void)
{
    s1.rn=1;
    s1.marks=90;
    s1.grade='A';
    printf("Rollno : %d Marks : %d Grade : %c",s1.rn,s1.marks,s1.grade);

    //copying the data element by element
    //s2.rn=s1.rn;
    //s2.marks=s1.marks;
    //s2.grade=s1.grade;

    s2=s1; //directly assigning all values of s1 to s2
    printf("\n S2 : Rollno : %d Marks : %d Grade : %c",s2.rn,s2.marks,s2.grade);


    return 0;
}

*/


/*
struct Student
{
    int rn;
    int marks;
    char grade;
}s1={1,85,'A'},s2={2,50,'B'};

int main(void)
{
    printf("\n S1: Rollno : %d Marks : %d Grade : %c",s1.rn,s1.marks,s1.grade);
    printf("\n S2: Rollno : %d Marks : %d Grade : %c",s2.rn,s2.marks,s2.grade);
    return 0;
}
*/



/*
struct Student
{
    int rn;
    int marks;
    char grade;
}s1={1,85,'A'}; //initialize the variable at the time of declaration

int main(void)
{
    printf("Rollno : %d Marks : %d Grade : %c",s1.rn,s1.marks,s1.grade);
    return 0;
}
*/


/*
struct Student
{
    int rn;
    int marks;
    char grade;
}s1;

int main(void)
{
    s1.rn=1;
    s1.marks=90;
    s1.grade='A';
    printf("Rollno : %d Marks : %d Grade : %c",s1.rn,s1.marks,s1.grade);
    return 0;
}
*/

/*
//structure is also called as user defined datatype
struct Student
{
    int rn;
    int marks;
    char grade;
};

int main(void)
{
    struct Student s1; // we have created struture variable inside main
    s1.rn=1;
    s1.marks=90;
    s1.grade='A';
    printf("Rollno : %d Marks : %d Grade : %c",s1.rn,s1.marks,s1.grade);
    return 0;
}

*/