// no of digits
#include<math.h>
#include<stdio.h>
void main()
{
int n;
int digitscount=0;
printf("enter a num:");
scanf("%d", &n);
digitscount=log10(n)+1;
printf("%d", digitscount);
}


