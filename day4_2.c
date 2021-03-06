#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int num=250;
    int val;
    val=printf("Num = %d",num);
            //  Num = 250
    printf("\n Val = %d",val);
    return 0;

}

/*
int main(void)
{
    int val;
    val=printf("hello");
    //if we equate printf() to some int variable, 
    //printf() will perform its task of printing the data on output screen
    //and it will return number of characters printed on output screen

    printf("\n Value : %d",val);
    return 0;
}

*/