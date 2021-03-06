#include<stdio.h>
#include<stdlib.h>

union student
{
    int id;
    int marks;
};
int main(void)
{
    union student st;
    st.marks=15; //1111
    st.id=1; //0001 
    printf("ID : %d",st.id);
    printf("\n Marks : %d",st.marks);
    return 0;
}


/*
union student
{
    int id;
    int marks;
};
int main(void)
{
    union student st;
    st.id=1;
    printf("ID : %d",st.id);
    st.marks=20;
    printf("\n Marks : %d",st.marks);
    return 0;
}
*/

/*
//memory is shared by all the elements
union student
{
    int id;
    int marks;
};
int main(void)
{
    union student st;
    printf("size : %d",sizeof(st));
    return 0;
}

*/


/*
#pragma pack(1)
struct student
{
    char name[20];
    int rn:5;
    int marks:4;
};
int main(void)
{
    printf("Size : %d",sizeof(struct student));
    return 0;

}
*/

/*
struct student
{
    char name[20];
    int rn:5;
    int marks:4;
};
int main(void)
{
    printf("Size : %d",sizeof(struct student));
    return 0;

}
*/


/*
#pragma pack(1) // requesting a compiler to pack the memory 1byte every time
struct student
{
    int rollno; // 1 + 1 + 1 + 1 
    int marks; //1 + 1 + 1 + 1 
    char grade; //1  
};
int main(void)
{
    printf("Size : %d",sizeof(struct student));
    return 0;

}
*/




/*
struct Student
{
    int marks; // 8bytes (4bytes using + 4 bytes SLACK)
    double percentage; // 8 bytes
};
int main(void)
{
    printf("Size : %d",sizeof(struct Student));
    return 0;

}

*/

/*
struct Student
{
    int id;
    int rollno;
    int marks;
    char grade;
    int result;
    char ch1;
    char ch2;
};

int main(void)
{
    struct Student s;
    printf("\n size of structure : %d",sizeof(s));
    return 0;
}

*/