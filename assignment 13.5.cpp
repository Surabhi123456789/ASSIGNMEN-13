#include<stdio.h>
int sumdigit(int);

int main()
{
    int n;
    printf("enter the number ::");
    scanf("%d",&n);
    printf("%d",sumdigit(n));
    return 0;
}
int sumdigit(int n)
{
    int r,sum=0;
    if(n>0)
        sum=n%10 + sumdigit(n/10);

         return sum ;
}
