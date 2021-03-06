#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[],char *env[])
{
    int i;
    for(i=0;i<30;i++)
    {
        printf("\n env[%d] = %s",i,env[i]);
    }

    return 0;
}



/*
int main(int argc,char *argv[])
{
    int i;
    printf("Argument Count : %d",argc);
    for(i=0;i<argc;i++)
    {
        printf("\n argv[%d] = %s",i,argv[i]);
    }

    return 0;
}
*/
//./a.exe sunbeam pune