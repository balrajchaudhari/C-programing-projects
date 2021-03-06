#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int num=20;
    int *ptr; //pointer declaration 
    ptr=&num; //address of num is stored in pointer variable ptr
    int **pptr; // pointer to pointer
    pptr=&ptr; // pptr is a pointer which is holding address of ptr

    printf("Num : %d *ptr : %d **pptr : %d",num,*ptr,**pptr);
    printf("\n &num : %u ptr : %u",&num,ptr);
    printf("\n &ptr : %u pptr : %u",&ptr,pptr);

    printf("\n size of ptr : %d sizeof pptr : %d",sizeof(ptr),sizeof(pptr));

    num=30;
    printf("\n Num : %d *ptr : %d **pptr : %d",num,*ptr,**pptr);
    *ptr=40;
    printf("\n Num : %d *ptr : %d **pptr : %d",num,*ptr,**pptr);
    **pptr=50;
    printf("\n Num : %d *ptr : %d **pptr : %d",num,*ptr,**pptr);


    return 0;
}

/*
int main(void)
{
    int num=20;
    int *ptr; //pointer declaration 
    ptr=&num; //address of num is stored in pointer variable ptr

   
    printf("Num : %d &num : %u",num,&num);
    printf("\n*ptr : %d ptr : %u",*ptr,ptr);
    printf("\n &ptr : %u",&ptr);
    return 0;
}
*/