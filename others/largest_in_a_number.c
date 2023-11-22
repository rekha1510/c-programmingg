#include<stdio.h>
void main()
{
int n,a,b,c,d;
printf("Enter a number:");
scanf("%d", & n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
if(a>b  && a>c && a>d)
{
printf("%d",a);
}
else if(b>a && b>c && b>d) {
printf("%d", b); }
else if(c>a  && c>b && c>d){
printf("%d",c); }
else{
printf("%d",d);
}
}
