#include<stdio.h>

int sum(int);
int main()
{
    int n;
    printf(" enter the number\n");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
    {
      s= n + sum(n-1);

    }
    return s;
}
