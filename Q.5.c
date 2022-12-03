//Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int i,x,y,temp;
    printf(" given numbers are co-prime numbers or not:-");
    printf("\n enter two number:-");
    scanf("%d %d",&x,&y);
    for(i=2;i<=x<y?y:x;i++)
    {
        if(x%i==0&&y%i==0)
            temp=0;
          break;
    }
    if(temp)
        printf("%d and %d is  co-prime number",x,y);
    else
         printf("%d and %d is not co-prime number",x,y);
    getch();
    return 0;
}
