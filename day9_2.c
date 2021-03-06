#include<stdio.h>
#include<stdlib.h>

static int s=50; 
void test();

int main(void)
{
    printf("s : %d",s);
    test();
    printf("\n After calling test() S : %d",s);
    return 0;
}
void test()
{
    s++;
}




/*
void demo();
int main(void)
{
    demo();
    demo();
    return 0;
}

void demo()
{
    int num=30;
    static int s;
    // we need to initialize static variable at the time of declaration only
    //if we donot do so, then static variable will be converted into auto variable 
    //it will voilet the property of static
    s=40;
    printf("\n Num : %d S : %d",num,s);
    num++;s++;
    printf("\n Num : %d S : %d",num,s);
   
}
*/


/*
void demo();
int main(void)
{
    demo();
    return 0;
}
void demo()
{
    int val=30;
    static int s_val=val; //error: initializer element is not constant
    // we can not intialize static variable with another variable
}
*/



/*
void demo();

int main(void)
{
    demo();
    printf("\ncalling function one more time....\n ");
    demo();
    demo();
    return 0;
}

void demo()
{
    int num=50; // LOCAL VARIABLE (STACK SECTION)
    static int s_var=30; //STATIC VARIABLE (DATA SECTION) 
    //it is getting initialized only once through out the program
    //it retains its last updated value in the next call
    printf("\n Num : %d s_var : %d",num,s_var);
    num++;
    s_var++;
    printf("\n Num : %d s_var : %d",num,s_var);
}

*/

/*
int main(void)
{
    auto int val=20; //val is local variable
    //BY DEFAULT ALL LOCAL VARIABLES ARE AUTO 
    //STACK SECTION
    printf("val : %d",val);
    return 0;
}

//SCOPE  : main() 
//LIFE  :from line  number 5 to line number 9 

*/