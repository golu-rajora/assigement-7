// Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int x;
    printf("all prime number under 100:-\n");
    int i;
    for(x=2;x<=100;x++)
    {
      for(i=2;i<=x;i++)
      {

      if(x%i==0)
      {


        if(x==i)
        printf(" %d ",i);
        break;}
      }
    }
    getch();
    return 0;
}
