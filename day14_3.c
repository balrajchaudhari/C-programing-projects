#include<stdio.h>
#include<stdlib.h>

//reading the data from the file and displaying it on output screen

int main(void)
{
    FILE *fptr; 
    char ch;
    fptr=fopen("source.txt","r"); //"r" is mode of file opening (r : read) 
    if(fptr==NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch=fgetc(fptr))!=EOF)
    {
        fputc(ch,stdout);
    }

    fclose(fptr);
    return 0;
}