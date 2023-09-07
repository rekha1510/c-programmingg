#include<math.h>
#include<stdio.h>
void main()
{
int n,digitscount=0;
printf("enter a num:");
scanf("%d", &n);
digitscount=log10(n)+1;
int rem;
int max=0;
for(int i=0;i<=digitscount;i++)
{
rem=n%10;
if(rem>max)
{
max=rem;
}
n=n/10;
}
printf("%d", max);
}
