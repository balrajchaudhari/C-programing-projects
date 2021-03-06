#include<stdio.h>
#include<stdlib.h>

extern int i; //declaration 
// data section
// value of i variable is declared externally
int main(void)
{
    printf("Value of i variable : %d",i); //accessing the extern variable 
    return 0;
}
i=50; //defining the extern variable





/*
register int reg=30; //global area 
//error: address of register variable 'reg_var' requested
//we can not declare register variables in the global area

int main(void)
{
    return 0;
}

*/



/*
int main(void)
{
    register int reg_var;
    printf("Enter Reg variable value :");
    scanf("%d",&reg_var); 
    //error: address of register variable 'reg_var' requested

    return 0;
}
*/



/*
int main(void)
{
    register int val=30; 
    //a request is made to recive a memory from CPU register
    printf("val : %d",val);

    return 0;
}
*/