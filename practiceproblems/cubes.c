#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("Enter a number:");
scanf("%d", &n);
for(int i=1;i<=n;i++)
{
int j=pow(i,3);
printf("%d\n",j);
}
}
