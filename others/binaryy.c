#include <stdio.h>
#include<math.h>
int main()
{
   int i,n,r,dc,sum=0;
   printf("Enter a binary number:");
   scanf("%d",&n);
   dc=log10(n)+1;
   for(i=0;i<dc;i++)
   {
    r=n%10;
    sum=(pow(2,i)*r)+sum;
    n=n/10;
   }
   printf("%d",sum);
   return 0;
}
