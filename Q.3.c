// Write a program to check whether a given number is there in the Fibonacci series or not
#include<stdio.h>
int main()
{
    int i,s,a=-1,b=1,x;
    printf(" check a given number is a given number is  :-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    for(i=1;a+b<=x;i++)
    {
       s=a+b;
       a=b;
       b=s;
    }
    if(x==s)
    printf("%d is fibonnaci number",x);
    else
         printf("%d is not fibonnaci number",x);
    getch();
    return 0;

}

