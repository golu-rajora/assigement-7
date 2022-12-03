//Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int i,x,s=0,y,z;
    printf(" check whether a given number is an Armstrong number or not:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    int temp;
    temp=x;
    for(i=0;x>0;i++)
    {
        y=x%10;
        s=s+y*y*y;
        x=x/10;
    }
    if(s==temp)
        printf("%d is armstrong number",temp);
        else
            printf("%d is not armstrong number",temp);

        getch();
         return 0;


}
