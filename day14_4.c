#include<stdio.h>
#include<stdlib.h>

//copying the data from source to dest 

int main(void)
{
    FILE *fptr1,*fptr2; 
    char ch;
    fptr1=fopen("source.txt","r"); //"r" is mode of file opening (r : read) 
    if(fptr1==NULL)
    {
        printf("File not found");
        return 0;
    }

    fptr2=fopen("dest.txt","w"); //"w" is mode of file opening (r : write) 
    if(fptr2==NULL)
    {
        printf("File not found");
        return 0;
    }

    ch=fgetc(fptr1); //fetch the first character

    while(ch!=EOF)
    {
        fputc(ch,fptr2);
        ch=fgetc(fptr1);//fetch next character
    }

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

