#include<stdio.h>
#include<stdlib.h>

//fseek()
//ftell()

int main(void)
{
    FILE *fptr; 
    char ch;
    fptr=fopen("src.txt","r"); //"r" is mode of file opening (r : read) 
    if(fptr==NULL)
    {
        printf("File not found");
        return 0;
    }

    //fseek(fptr,10,SEEK_SET);//move 10 characters ahead from begining of the file 
    //printf("\n ftell : %u fgetc : %c",ftell(fptr),fgetc(fptr));

    //fseek(fptr,5,SEEK_CUR); //move 5 characters ahead from current cursor position
    //printf("\n ftell : %u fgetc : %c",ftell(fptr),fgetc(fptr));

    fseek(fptr,-5,SEEK_END); //move the cursor from end of the file
    printf("\n ftell : %u fgetc : %c",ftell(fptr),fgetc(fptr));

fclose(fptr);
return 0;
}