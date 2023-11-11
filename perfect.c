#include<stdio.h>
void perfectNumber(int);
void perfectNumber(int n)
{
int r,sum=0,temp=n;
for(int i=0;i<=n/2;i++)
    {
     r=n%i;
     if(n%i==0)
        sum=sum+r;
    }
if(sum==temp)
   printf("%d is a perfect number",temp);
else
printf("no");
}
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
perfectNumber(n);
return 0;
}
