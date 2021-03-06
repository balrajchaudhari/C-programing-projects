#include<stdio.h>
#include<stdlib.h>

//dynamic memory allocation

int main(void)
{
    int n;
    int i;
    int *ptr=NULL;
    printf("Enter Number of elements you wish to insert in an array..");
    scanf("%d",&n);

    //1.request dynamic memory (malloc() function)

    //ptr=(int *)malloc(sizeof(int)*n);
    ptr = (int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory can not be allocated");
        return 0;
    }
    else
    {
        //2. use that memory
        printf("\n Enter Array Elements :");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("\n Array Elements are:");
        for(i=0;i<n;i++)
        {
            printf(" %d ",ptr[i]);
        }
    }

    //3. release the dynamic memory
    free(ptr); // DANGLING POINTER 
    ptr=NULL; // Avoid memory leakage

    return 0;
}