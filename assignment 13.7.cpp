#include<stdio.h>
int hcf(int,int);

int main()
{
    int n,m;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter the number\n");
    scanf("%d",&m);
    printf("%d",hcf(n,m));
    return 0;
}
int hcf(int n,int m)
{
    if(n>m)
       return hcf(n%m,m);
    if(n%m==0)
        return m;
    else
       return    hcf(m%n,n);

}
