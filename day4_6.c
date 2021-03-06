#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


//Range of data types

int main(void)
{
    int num=2147483648;
    int num1=2147483649;

    printf("Num : %d",num);
    printf("\n Num1 : %d",num1);
    printf("\n Min : %d Max : %d",INT_MIN,INT_MAX);
    //Min : -2147483648 Max : 2147483647

    return 0;
}