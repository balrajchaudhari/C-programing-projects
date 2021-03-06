#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//0.Exit 1.strlen 2.strchr 3.strstr 4.strcpy 5.strcat 6.strcmp

int main(void)
{
    int choice,val;
    char *ptr=NULL;
    char ch;
    char str1[20],str2[20];
    int len;
   
    do
    {
         printf("\nEnter Choice : 0.Exit 1.strlen 2.strchr 3.strstr 4.strcpy 5.strcat 6.strcmp");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter string : ");
                scanf("%s",str1);
                len=strlen(str1);
                printf("Length of string is %d",len);
            break;

            case 2:
                //strchr is used to find a character in a string
                printf("\n Enter String :");
                scanf("%s",str1);
                printf("\n enter character to be searched :");
                scanf("%*c");
                scanf("%c",&ch);
                ptr=strchr(str1,ch); //it will search for ch character inside str1
                if(ptr==NULL)
                    printf("character not found");
                else
                    printf("Character found");

                break;

            case 3:
                //strstr is used to find a string within a string
                printf("\n Enter String :");
                scanf("%s",str1);
                printf("\n enter string to be searched :");
                scanf("%s",str2);
                ptr=strstr(str1,str2);
                if(ptr==NULL)
                    printf("substring not found");
                else
                    printf("substring found");

            break;


            case 4:
                printf("Enter source string:");
                scanf("%s",str1);
                strcpy(str2,str1);
                printf("\n STR1 : %s STR2 : %s",str1,str2);

            break;

            case 5:
                printf("Enter first string :");
                scanf("%s",str1);
                printf("Enter second string :");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("str1 : %s",str1);                
            break;

            case 6:
                 printf("Enter first string :");
                scanf("%s",str1);
                printf("Enter second string :");
                scanf("%s",str2);
                val=strcmp(str1,str2);

                printf("VAL : %d",val);
            break;

        }//end of switch
    }while(choice!=0);




    return 0;
}

