#include<stdio.h>

int sumodd(int);
int main()
{
    int n;
    printf(" enter the number\n");
    scanf("%d",&n);
    printf("%d",sumodd(n));
    return 0;
}
int sumodd(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
    {
      s= (2*i-1) + sumodd(n-1);

    }
    return s;
}
