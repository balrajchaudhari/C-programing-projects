#include<stdio.h>
#include<stdlib.h>

void swap_by_value(int n1,int n2);

int main(void)
{
    int n1,n2;
    printf("Enter Num1 :");
    scanf("%d",&n1);

    printf("Enter Num2 :");
    scanf("%d",&n2);
    
    printf("Before SWAP function call N1: %d N2:%d ",n1,n2);
    swap_by_value(n1,n2); // call by value concept
    printf("\n After SWAP function call N1: %d N2:%d ",n1,n2);

    return 0;
}

void swap_by_value(int n1,int n2)
{
    printf("\n inside swap function : BEFORE N1: %d N2 : %d",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\n inside swap function : AFTER N1: %d N2 : %d",n1,n2);
}

//n1 = 5 n2 = 3
//n1=n1+n2;    n1= 5+3 n1=8
//n2=n1-n2;    n2 = 8-3 n2=5
//n1=n1-n2;    n1=8-5   n1=3 






/*
char accept_char();


int main(void)
{
    char c;
    c=accept_char();
    printf("C : %c ",c);
    return 0;
}

char accept_char()
{
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);
    return ch;
}
*/





/*
int accept_num();
//void sum_of_numbers(int a,int b);  //declaration
// void sum_of_numbers(int,int);  //declaration
int sum_of_numbers(int a,int b);


//name of the function is sum_of_numbers() 
// taking two arguments , int and int


int main(void)
{
    int n1,n2;
    int n3=50,n4=10;
    int res;
    n1=accept_num();
    n2=accept_num();
    res=sum_of_numbers(n1,n2); //function call 
                    // by passing two arguments
                    //CALL BY VALUE CONCEPT
    printf("Addition : %d",res);
    res=sum_of_numbers(n3,n4);
    printf("\n Addition : %d",res);
    return 0;
}


int accept_num()
{
    int num;
    printf("Enter Num : ");
    scanf("%d",&num);
    return num;
}

/*
void sum_of_numbers(int a,int b)
{
    int res;
    res=a+b;
    printf("Addition : %d",res);
}

*/



int sum_of_numbers(int a,int b)
{
    int res;
    res=a+b;
    return res;
}





/*
int accept_num();

int main(void)
{
    int n1,n2;
    n1=accept_num(); //function call  //location is n1  
    n2=accept_num();
    printf("N1: %d N2 : %d",n1,n2);
    return 0;
}

int accept_num()
{
    int num;
    printf("Enter Num : ");
    scanf("%d",&num);
    return num;
}

*/