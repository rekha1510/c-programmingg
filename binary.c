#include<stdio.h>
int main()
{
int a,i;
long long int n;
printf("Enter the binary number:");
scanf("%lld",&n);
for(i=0;n>0;i++)
{
a=n%2;
n=n/2;
}
printf("%d\n",a);
}
