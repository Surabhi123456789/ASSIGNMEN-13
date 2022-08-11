#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,i,m=0;
    printf("enter the limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",fibonacci(m));
        m++;
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==0||n==1)
        return n;
      return fibonacci(n-1)+fibonacci(n-2);
}
