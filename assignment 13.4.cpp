#include<stdio.h>

int square(int);
int main()
{
    int n;
    printf(" enter the number\n");
    scanf("%d",&n);
    printf("%d",square(n));
    return 0;
}
int square(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
    {
      s= (i*i) + square(n-1);

    }
    return s;
}

