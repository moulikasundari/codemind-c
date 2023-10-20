#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f",&a);
    if(a<=10000)
    {
        b=a*0.80;
        c=a*0.20;
    }
    else if(a<=20000)
    {
        b=a*0.90;
        c=a*0.25;
        
    }
    else
    {
        b=a*0.95;
        c=a*0.30;
    }
    d=a+b+c;
    printf("%.2f",d);
     
    
}