#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char *s1="sunbeam";
    char *s2="sunbeam";

    char s3[10]="sunbeam";
    char s4[10]="sunbeam";

    if(s1==s2)
        printf("\n *S1 is same as *S2");
    else
        printf("*S1 is different from *S2");

    if(s3==s4)
        printf("\n s3 is same as s4");
    else
        printf("\n s3 is different from s4");

    return 0;
}


/*
int main(void)
{
    char *str="sunbeam";
    //printf("%s",str+4);
    //printf("%c",*str+1);
    //*str+1
    //*base addrees+1
    //s+1
    //t
    printf("%c",*(str+2));
    //*(baseaddress+2)
    //*(point to location of char n)
    //n
    return 0;
}
*/


/*
int main(void)
{
    char *str="precat";
    printf("str : %u ",str);
    printf("\n *str : %c ",*str);
    printf("\n str : %s",str);
    //printf("\n *str = %s",*str); //segmentation fault
    return 0;
}
*/


/*
int main(void)
{
    char str1[10]="Precat"; // string defined using character array
    char *str2="SunbeamPune-CProgramming"; // string defined using character pointer
    printf("%s %s",str1,str2);
    printf("\n %d %d ",sizeof(str1),sizeof(str2));
    return 0;
}
*/