#include<stdio.h>
int main()
{
    int i,n,f;
    printf("enter n=");
    scanf("%d",&n);
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial=%d",f);
}