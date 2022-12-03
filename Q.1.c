//Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int i,s,a=-1,b=1,x;
    printf("find Nth term fibonnaci series:-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
       s=a+b;
       a=b;
       b=s;
    }
    printf("%d term fibonnaci number is=%d",x,s);
    getch();
    return 0;

}
