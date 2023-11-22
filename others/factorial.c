#include<stdio.h>
long long int calcfact(int n);
int main()
{
int n;
long long int fact;
printf("Enter number:");
scanf("%d",&n);
fact=calcfact(n);
printf("factorial of %d is %lld",n,fact);
return 0;
}
long long int calcfact(int n)
{
if(n==0)
  return 1;
else 
  return n*calcfact(n-1);
}
