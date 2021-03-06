#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num=0x31; // Hexa decimal number
    //when we preced any number with 0x it is considered as hexa decimal number
    printf("Num : %x Num : %d Num : %o",num,num,num);

    //Hexa to Normal Decimal Number
    // 31 ===> Base 16) 
    // 3 * 16^1  +  1*16^0
    //  48       +   1
    //49 

    //Hexa to Octal 
    // Hexa to binary ===> binary to octal
    // 3    1
    // 0011 0001

    // 00110001  ==> Binary 
    // 00   110   001
    //     6       1

    return 0;
}



/*
int main(void)
{
    int num=040;
     
    // Octal Number
    //any number which is preceded with 0 symbol, it is considered as octal number
    printf("%o %x %d",num,num,num);
    return 0;
}
*/