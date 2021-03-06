#include<stdio.h>
#include<stdlib.h>

/*
void accept_data(int a[4]); // function name is accept_data()
//function is taking argument as an array 

int main(void)
{
    int a[4],b[4];
    int i;

    printf("\n Accepting Array A DATA...\n");
    accept_data(a); //function call , we pass only array name
    printf("\n Accepting Array B DATA ..\n");
    accept_data(b); //function call
        
    return 0;
}


void accept_data(int a[4])
{
    int i;
printf("Enter Array Elements :");
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
       
    printf("\n Array elements are :");
    for(i=0;i<4;i++)
        printf(" %d ",a[i]);

}
*/



/*
int main(void)
{
    int arr[4];
    int i;
    printf("Enter Array Elements :");
    for(i=0;i<4;i++)
        //scanf("%d",&arr[i]);
        scanf("%d",arr+i);
    printf("\n Array elements are :");
    for(i=0;i<4;i++)
        //printf(" %d ",arr[i]);
        printf(" %d ",*(arr+i));

    return 0;
}
*/


//a[i] = *(a+i)
//&a[i] = (a+i)

/*
int main(void)
{
    int a[4]={11,44,22,22};
   // printf(" %d ",*a+1);
    //*a+1
    //11+1
    //12

     //printf(" %d ",(*a+2)+4);

     //(*a+2)+4
     //(11+2)+4
     //17


     printf(" %d ",(*(a+2))+4);


    return 0;
}
*/



/*

int main(void)
{
    int a[4]={10,20,30,40};
    printf("a[0] : %d *a : %d",a[0],*a);
    printf("\n  %d  %d",a[1],*(a+1));
    printf("\n  %d  %d",a[2],*(a+2));
    printf("\n  %d  %d",a[3],*(a+3));
    return 0;
}
*/


/*
int main(void)
{
    int a[4]={11,22,33,44};
    //      624 628  632 636    640 644 648 652     656  660  664 668     672 676 680 684

    printf("a : %u &a : %u ",a,&a);
    printf("\n a+1 : %u a+2 : %u a+3 : %u a+4 : %u ",a+1,a+2,a+3,a+4);
    printf("\n &a+1 : %u &a+2 : %u &a+3 : %u &a+4 : %u ",&a+1,&a+2,&a+3,&a+4);
    return 0;
}
*/


/*
int main(void)
{
    int a[5]={4,2,6};
    printf("\n size : %d",sizeof(a));
    return 0;
}

*/

/*
int main(void)
{
    int b[];  //error: array size missing in 'b'
    return 0;
}
*/


/*
int main(void)
{
    int a[3]={30,20,18};
    int i;
    for(i=0;i<3;i++)
    printf(" %d at %u ",a[i],&a[i]);
    printf("\n size : %d",sizeof(a));
    return 0;
}
*/

/*
int main(void)
{
    int a[4];
    // IF WE PARTIALLY ASSIGN THE ARRAY ELEMENTS AFTER THE DECLARATION 
    //THEN REMAINING ELEMENTS RECIEVES VALUE AS GARBAGE VALUES

    a[0]=20;
    a[1]=40;
    int i;
    for(i=0;i<4;i++)
        printf(" %d ",a[i]);
    return 0;
}
*/



/*
int main(void)
{
    int a[4]={30,15};
    // IF WE PARTIALLY INITIALIZE THE ARRAY ELEMENTS AT THE TIME OF DECLARATION 
    //THEN REMAINING ELEMENTS RECIEVES VALUE AS ZERO

    int i;
    for(i=0;i<4;i++)
        printf(" %d ",a[i]);
    return 0;
}

*/

/*
int main(void)
{
    int i;
    int a[5]; // declration of an array
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;

    for(i=0;i<5;i++)
    printf(" %d ",a[i]);

    return 0;
}

*/

/*
int main(void)
{
    int a[5]={10,20,30,40,50}; //array initialization
    int i;

    for(i=0;i<5;i++)
    printf(" %d ",a[i]);
    return 0;
}

*/