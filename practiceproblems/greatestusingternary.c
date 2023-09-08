#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a num:");
scanf("%d", &a);
printf("enter a num:");
scanf("%d", &b);
printf("enter a num:");
scanf("%d", & c);
(a>b)?((a>c)?printf("a is bigg"):printf("b is big")):((c>b)?printf("c is bigger"):printf("b is bigger"));
}

