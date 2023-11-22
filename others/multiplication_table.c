#include<stdio.h>
void main()
{
int n,x=1;
printf("enter a num:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d * %d= %d",x,i,x*i);
}
}
