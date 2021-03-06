#include<stdio.h>
#include<stdlib.h>

//Pointer arithmetic concept

int main(void)
{
   int num=10;
   int *ptr=&num;

   printf("Num : %d *ptr : %d",num,*ptr);
   printf("\n &num : %d ptr : %u ",&num,ptr);
    (*ptr)++; //increment the value 

    //(*6632)++
    //10++ 
    //11
     printf("\nNum : %d *ptr : %d",num,*ptr);
    return 0;
}

/*

int main(void)
{
   int num=10;
   int *ptr=&num;

   printf("Num : %d *ptr : %d",num,*ptr);
   printf("\n &num : %d ptr : %u ",&num,ptr);
  // ++*ptr; //it increments the value by 1
   //printf("\n Num : %d *ptr : %d",num,*ptr);

   *++ptr; // ptr++ // ++ptr //6632++ //6636 next address
   // increment the address
   printf("\n Num : %d *ptr : %d",num,*ptr);

    return 0;
}

*/