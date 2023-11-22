//printing largest in a number using while loop
#include<stdio.h>
void main()
{
int n,digitscount=0;
printf("Enter a num:");
scanf("%d", &n);
int max=0;
while(n>0)
{
int rem=n%10;
if(rem>max)
   {
    max=rem;
}
n=n/10;
}
printf("%d", max);
}


