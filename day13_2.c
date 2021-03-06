#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("%d",__LINE__);
    printf("\n %s",__FILE__);
    printf("\n %s",__DATE__);
    printf("\n %s",__TIME__);
    return EXIT_SUCCESS;
}

/*
#define PI 3.14
int main(void)
{
    #ifdef PI
        printf("\n PI is defined");
    #else
        printf("\n PI is not defined");
    #endif

    #undef PI //undefine the value of PI 

    #ifdef PI
        printf("\n PI is defined");
    #else
        printf("\n PI is not defined");
    #endif

    return 0;
}
*/

/*
// ## it is used to join the parameters 
#define test(x,y) x##y

int main(void)
{
    int a=10,b=20,ab=600;
    //printf("A : %d b : %d ab : %d",a,b,ab);

    printf("A:%d b:%d",a,b);
    printf("\n %d",test(a,b));
    //printF("%d",ab);
    return 0;
}
*/


/*
#define STRDISP(x) {printf("%s",#x+3);}
int main(void)
{
    STRDISP(sunbeam);
    //{printf("%s","sunbeam"+3);}
    return 0;
}
*/


/*
// # represents string 
#define STRDISP(x) {printf("%s",#x);}
int main(void)
{
    STRDISP(sunbeam);
    //{printf("%s","sunbeam");}
    return 0;
}
*/

/*
#define SWAP(type,a,b) {type temp; temp=a; a=b;b=temp;}

int main(void)
{
    int n1=10,n2=20;
    printf(" Before :N1 : %d N2 : %d",n1,n2);
    SWAP(int,n1,n2);
    //{int temp; temp=n1; n1=n2;n2=temp;}
    printf(" \n After :N1 : %d N2 : %d",n1,n2);
    return 0;

}
*/


/*
#define SQR(a) a*a //macro having one argument

int main(void)
{
    printf("%d",SQR(3+2)); //CALL TO MACRO 
            //3+2*3+2
            //3 + 6 + 2
            //11
    return 0;
}
*/

/*
#define SQR(a) a*a //macro having one argument

int main(void)
{
    printf("%d",SQR(4)); //CALL TO MACRO 
                // IT GETS EXPANDED AT THE SAME LOCATION
        //printf("%d",4*4);

    return 0;
}
*/

/*

#define PI 3.14 //macro without any argument
// #define is a keyword
//PI is name of macro
//3.14 is replaceable text for PI 

int main(void)
{
    printf("%f",PI);
    return 0;
}
*/



