#include<stdio.h>
#include<stdlib.h>

//function pointer
//it is a pointer to another function 
// to give a call to another function

void get();
void disp();
void (*fnptr)(); // function pointer


int main(void)
{
   // get();
    //disp();

    printf("\n get function address : %u",get);
    fnptr=get; //function pointer is pointing to get() 
    printf("\n fnptr address : %u",fnptr);
    (*fnptr)();

    printf("\n disp function address : %u",disp);
    fnptr=disp; //function pointer is pointing to disp()
    printf("\n fnptr address : %u",fnptr);
    (*fnptr)();
    

    return 0;
}

void get()
{
    printf("\n Inside Get function");
}
void disp()
{
    printf("\n Inside disp function");
}

