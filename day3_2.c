#include<stdio.h>
#include<stdlib.h>

//Home Work
// Number system 
// Octal Hexa 
//octl to hexa 
//octal to decimal
//hexa to decimal
//represent any number in binary

/*

int main(void)
{
    int i=10;
    float f1=5.6;
    char ch='A';
    double d;
    printf("%d\n",sizeof(i)+sizeof(f1));
    printf("%10d\n",sizeof(i)+sizeof(f1)+sizeof(ch));
    printf("%10d\n",sizeof(i+f1));
    printf("%10d\n",sizeof(i+f1+ch));
    printf("%10d\n",sizeof(i+f1+ch+d));
    printf("%10d\n",sizeof(i)+sizeof(f1)+sizeof('M'));
    return 0;
}
*/
//ASCII CHARACTER SET
//ASCII (American Standard Code for Information Interchange)
//CHAR : 1BYTE : 8 BITs : 2^8 : 256
// 0 TO 255
//A-Z : 65 to 90  A : 65  B : 66 C : 67 ...... 
//a-z : 97 to 122
//0-9 : 48 to 57
//ASCII values of special characters:--
//\n=10
//\r=13
//\t=9
//\b=8
//\a=7

/*

int main(void)
{
    char ch='S';
    printf("ch :  %c ch : %d ",ch,ch);
    printf("\n size of ch : %d",sizeof(ch));
    return 0;
}
*/

/*
int main(void)
{
    char ch='A'; //initialization of character variable
    printf("Ch value : %c",ch);
    printf("\n size of character variable : %d ",sizeof(ch));
    printf("\n size of character datatype : %d",sizeof(char));
    printf("\n size of direct character variable : %d",sizeof('B'));
    //if we pass direct character inside sizeof()
    //it will be converting it into its ascii value
    //so the size will come as 4bytes
    return 0;
    
}
*/


/*
int main(void)
{
    double d=3.6;
    printf("size of variable d : %d",sizeof(d));
    printf("\n size of double datatype : %d",sizeof(double));
    printf("\n size of any value in decimal : %d",sizeof(8.9));
    return 0;
}

*/

/*


int main(void)
{
    float fvalue=7.5;
    printf("FVALUE : %f",fvalue);
    printf("\n size of variable fvalue : %d",sizeof(fvalue));
    printf("\n size of float datatype : %d",sizeof(float));
    printf("\n size of direct decimal value : %d",sizeof(8.456));
    //sizeof(8.456) direct value
     printf("\n size of direct decimal value : %d",sizeof(8.456f));
    return 0;
}


*/


/*

int main(void)
{
    int num=40;
    printf("Number : %d",num);
    printf("\n Size of num = %d",sizeof(num));
    printf("\n size of integer datatype : %d",sizeof(int));
    printf("\n size of any whole number %d",sizeof(50));
                //direct value inside sizeof (hardcoded value)
    return 0;
}

*/





/*
int main(void)
{
    int num1=30,num2=20;
    float fval=5.4;
    printf("Number one value  %d Number2 value  %d",num1,num2);
    printf("\n value of f_val %f",fval);
    printf("\n %d %d %f",num1,num2,fval);
    return EXIT_SUCCESS; //return 0;
}

*/
