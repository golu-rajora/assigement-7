//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,x,y;
    printf("all prime number between two given number:-\n");
    printf("enter two number:-");
    scanf("%d %d",&x,&y);
    for(x=x+1;x<=y-1;x++)
    {
        for(i=2;i<=x;i++)
        {
            if(x%i==0)
            {
                if(x==i)
                    printf(" %d",i);
                break;
            }
        }
    }
    getch();
    return 0;
}
