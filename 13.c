#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,x,x1,x2;
    printf("input values of a,b and c=");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0){
        printf("roots are real and equal");
        x=-b/(2*a);
        printf("roots=%f",x);

    }
    else if(d>0){
        printf("roots are real and distinct \n");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("root1=%f root2=%f",x1,x2);
        
    }
    else
    printf("roots are imaginary=");

}