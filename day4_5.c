#include<stdio.h>
#include<stdlib.h>

/*
int main(void)
{
    int num;
    char ch;
    printf("Enter Number :");
    scanf("%d",&num);
    printf("Enter Character :");
    //if we want to suppress the meaning of '\n' we use 
    //"%*c" so pressing enter wont affect. 
    //before accepting the character
    scanf("%*c");
    scanf("%c",&ch); 
    printf("\nNum : %d Ch : %c",num,ch);
    return 0;
}
*/


/*
int main(void)
{
    int num;
    char ch;
    printf("Enter Number :");
    scanf("%d",&num);
    printf("Enter Character :");
    //enter ===> '\n' ==>character 
    scanf("%c",&ch); // ch ='\n'
    printf("\nNum : %d Ch : %c",num,ch);
    return 0;
}

*/

/*
int main(void)
{
    char ch;
    printf("Enter Character :");
    scanf("%c",&ch);
    printf("Ch value : %c",ch);

    return 0;
}
*/


/*
int main(void)
{
    int n1,n2;
    printf("Enter First number :");
    scanf("%d",&n1);
    printf("\n Enter Second Number :");
    scanf("%d",&n2);

    printf("\n N1: %d N2 : %d",n1,n2);
    printf("\n N1: %u N2 : %u",&n1,&n2);

    return 0;
}

*/
/*
int main(void)
{
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    // take input value from user and store it at the address location of num
   //"&num"--> it returns the address of location where the variable is stored.
    printf("\n You have entered num value : %d",num);
    return 0;
}
*/