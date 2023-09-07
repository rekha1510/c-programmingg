#include<math.h>
#include<stdio.h>
void main() 
{
int sum=0;
int r,digitscount,i, n;
printf("Enter a three digit number:");
scanf("%d", & n);
digitscount=log10(n)+1;
for(int i=0;i<=digitscount;i++)
{
r=n%10;
n=n/10;
sum=sum+i;
}
printf("%d",sum);
}
