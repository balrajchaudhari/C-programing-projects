#include<stdio.h>
#include<stdlib.h>

int fact_with_rec(int num);

int main(void)
{
    int n,res;
    printf("Enter Num:");
    scanf("%d",&n);
    res=fact_with_rec(n);
    printf("Factorial : %d",res);
    return 0;
}

int fact_with_rec(int num)
{
    if(num==1)
        return 1;
    else 
        return num * fact_with_rec(num-1);
}



/*
int fact_without_rec(int num);

int main(void)
{
    int n,res;
    printf("Enter Number :");
    scanf("%d",&n);
    res=fact_without_rec(n);
    printf("Factorail of number : %d",res);
    return 0;
}

int fact_without_rec(int num)
{
    int ans=1;
    while(num)
    {
        ans=ans*num;
        num--;
    }
    return ans;
}
//assume num=4
//while(4) while(true) ans=ans*num  ans = 1*4 ans=4 num-- num =3
//while(3) ans=ans*num ans=4*3 ans=12  num=2
//while(2) ans = ans*num ans=12*2 ans=24 num=1
//while(1) ans=ans*num ans=24*1 ans = 24 num=0
//while(0) false
//return ans return 24

*/
