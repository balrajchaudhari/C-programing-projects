#include<stdio.h>
#include<stdlib.h>

//void pointer
int main(void)
{
    int num=50;
    char ch='A';
    void *ptr=NULL; //void pointer 
    //void *ptr; // generic pointer

    ptr=&num;
    printf("Num : %d *ptr : %d",num,*(int*)ptr);
    //if there is a void pointer then while dereferencing we need to typecast it 

    ptr=&ch;
    printf("\n ch : %c *ptr : %c",ch,*(char*)ptr);
    return 0;
}





/*
int main(void)
{
    int num=10;
    char *cptr; //scale factor of pointer is one byte
    // while dereferencing the data (fetching the data) it will derefer only one byte of data
    cptr=&num;

    printf("Num : %d *cptr : %d",num,*cptr);

    num=256;
    printf("\n Num : %d *cptr : %d",num,*cptr);
    return 0;

}

*/



/*
int main(void)
{
    int i=20;
    char ch='A';
    int *iptr = &i;
    char *cptr=&ch;
    printf("I : %d *iptr : %d",i,*iptr);
    printf("\n ch : %c *cptr : %c",ch,*cptr);
    return 0;
}

*/