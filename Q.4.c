//Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int H,i,x,y;
    printf("calculate HCF of two numbers:-");
    printf("\n enter two number:-");
    scanf("%d %d",&x,&y);
    for(H=x>y?x:y ;H>=1;H--)
    {

     if(x%H==0&&y%H==0)
        break;
    }
    printf(" HCF is = %d",H);
    return 0;
    getch();
}
