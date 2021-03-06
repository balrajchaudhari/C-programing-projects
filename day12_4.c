#include<stdio.h>
#include<stdlib.h>

//pointer and constant

int main(void)
{
    const float PI=3.14;
    const float * const fptr=&PI;
    float val=4.5;
    printf("PI : %f *fptr : %f",PI,*fptr);
    printf("\n &PI : %u fptr : %u",&PI,fptr);
    //PI++; //Error
    //*fptr=5.15; //error: assignment of read-only location '*fptr'

    //fptr=&val; //error: assignment of read-only variable 'fptr'
    return 0;
}



/*
int main(void)
{
    const float PI=3.14; //constant value
    const float *fptr;
    float val=5.5; //non constant value
    
    // wherever pointer is pointing that location becomes constant

    fptr=&PI; // pointer is pointing to constant value 
    printf("PI : %f *fptr : %f",PI,*fptr);
    printf("\n &PI : %u fptr : %u",&PI,fptr);

    //PI++; // NO , this will give error
    //*fptr=5.15; //error: assignment of read-only location '*fptr'

    fptr=&val; //pointer is pointing to non constant value
    printf("\n VAL : %f *fptr : %f",val,*fptr);
    printf("\n &val : %u fptr : %u",&val,fptr);
    //val++; //allowed 
    //*fptr=8.5; //error: assignment of read-only location '*fptr'


    return 0;
}

*/




/*
int main(void)
{
    const float PI=3.14;
    float *fptr=&PI;

    printf("PI : %f *fptr : %f",PI,*fptr);
    //PI++; //Error : read only value

    *fptr=5.15;
    printf("\n PI : %f *fptr : %f",PI,*fptr);

    return 0;
}
*/


/*
int main(void)
{
    const float PI=3.14;
    printf("PI : %f",PI);
    //PI++; //error: increment of read-only variable 'PI'
    //printf("\n PI : %f",PI);
    return 0;
}

*/

/*
int main(void)
{
    float PI=3.14;
    printf("PI : %f",PI);
    PI++;
    printf("\n PI : %f",PI);
    return 0;
}
*/
