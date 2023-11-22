#include<stdio.h>
void main()
{
int  x,y,a,b;
printf("enter number of pencils pens and their cost:");
scanf("%d %d %d %d", &x,&y,&a,&b);
int costp=x*a;
int costpe=y*b;
int maincost=costp+costpe;
printf("cost of total is %d",maincost);
}
