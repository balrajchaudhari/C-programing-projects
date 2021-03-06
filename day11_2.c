#include<stdio.h>
#include<stdlib.h>
//swap by address
void swap_numbers(int *n1,int *n2);
int main(void)
{
    int a=5,b=4;
    printf("Before : A : %d B: %d",a,b);
    swap_numbers(&a,&b); //call by address
    printf("\n After : A : %d B: %d",a,b);
    return 0;
}

void swap_numbers(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}