#include<stdio.h>
int factorial(int);

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n==0 || n==1)
        return 1;

    return n*factorial(n-1);
}
