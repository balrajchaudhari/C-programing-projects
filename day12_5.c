#include<stdio.h>
#include<stdlib.h>

//passing 2d array to the function
void accept_data(int arr[3][3]);  //function declaration

int main(void)
{
    int a[3][3];
    accept_data(a); //function call
    return 0;
}

void accept_data(int arr[3][3])
{
    int i,j;
    printf("Enter array elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n Array elements: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}

/*
int main(void)
{
    int a[2][2];
    int i,j;
    printf("Enter Elements :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Array Elements : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d at %u",a[i][j],&a[i][j]);
        }
        printf("\n");
    }


    return 0;
}

*/


