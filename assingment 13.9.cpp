#include<stdio.h>
int countdigit(int);
int main()
{
  int n,count=0;
  printf("enter the number \n");
  scanf("%d",&n);
  count=countdigit(n);
  printf("%d",count);
  return 0;
}
int countdigit(int n)
{
   if(n/10==0)
     return 1;
   return 1+ countdigit(n/10);
}





