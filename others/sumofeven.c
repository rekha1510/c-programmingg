#include<stdio.h>
#include<math.h>
int main()
{
   int n,dc,r,temp=0,i;
   scanf("%d",&n);
   dc=log10(n)+1;
   for(i=1;i<=dc;i++)
      {
          r=n%10;
          if(r%2==0)
            temp=r+temp;
          n=n/10;
      }
   printf("%d",temp);
   return 0;
}
