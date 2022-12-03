//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int i,s,a=-1,b=1,x;
    printf("first Nth term fibonnaci series:-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
       s=a+b;
       a=b;
       b=s;
         printf(" %d",s);
    }
    getch();
    return 0;

}

