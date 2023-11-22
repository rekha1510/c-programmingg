 #include<stdio.h>
#include<math.h>
void main()
{
int n,even=0,odd=0,digitscount=0;
printf("Enter the number:");
scanf("%d", & n);
digitscount=log10(n)+1;
for(int i=1;i<=digitscount;i++)
{
int rem=n%10;
if(rem%2==0) 
{
even++;

}
else 
{
odd++;

}
n = n / 10;
}
printf("even no of digits is %d\n",even);
printf("odd number of digits is %d\n",odd);

}
