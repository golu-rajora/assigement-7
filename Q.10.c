//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int x,i,s=0,y,z;
    printf(" print all Armstrong numbers under 1000:-");
    for(x=1;x<=1000;x++)
    {
        z=x;
        for(i=1;z>0;i++)
        {
           y=x%10;
           s=s+y*y*y;
           z=x/10;
        }
        if(x==s)
            printf(" %d",x);
        }
    getch();
    return 0;
}

