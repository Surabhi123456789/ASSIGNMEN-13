
#include<stdio.h>

int sumeven(int);
int main()
{
    int n;
    printf(" enter the number\n");
    scanf("%d",&n);
    printf("%d",sumeven(n));
    return 0;
}
int sumeven(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
    {
      s= (2*i) + sumeven(n-1);

    }
    return s;
}
