#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char name[]="PreCAT\0OM14"; // P r e C A T \0 O M 1 4 \0

        //"PreCAT\\0OM14"  P r e C A T \  \0 O M 1 4 \0

    printf("Size : %d",sizeof(name));
    printf("\n name : %s",name);
    return 0;
}




/*
int main(void)
{
    char name[]="PreCAT"; // P r e C A T \0
    printf("Size : %d",sizeof(name));
    printf("\n name : %s",name);
    return 0;
}

*/


/*
int main(void)
{
    char name[10]="PreCAT";
    printf("Size : %d",sizeof(name));
    return 0;
}
*/

/*
int main(void)
{
    char name[20];
    printf("Enter name:");
    gets(name);
    puts(name);
    return 0;
}
*/

/*
int main(void)
{
    char name[20];
    printf("Enter Name : ");
    scanf("%s",name);
    printf("Name : %s",name);
    return 0;
}
*/

/*
int main(void)
{
    char ch[10]="Sunbeam"; //string 
    printf("%s",ch);
    return 0;
}
*/

/*
int main(void)
{
    char ch[10]="Sunbeam"; //string 
    int i;
    for(i=0;i<7;i++)
    printf("%c",ch[i]);
    return 0;


    return 0;
}

*/
