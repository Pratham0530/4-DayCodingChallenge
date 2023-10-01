#include<stdio.h>
int main()
{
    int n;
    printf("enter a year=");
    scanf("%d",&n);
     if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
        printf("its a leap year");

     }
     else
     printf("it is not an leap year");
}