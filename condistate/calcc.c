// write a program to calculate sum of 2 numbers if the user enters + , difference of 2 numbers if the user enters -, product if user enters *, division if user enters /
#include<stdio.h>
void main()
{
char ch;
float a,b,add,sub,mul,div;
printf("Enter a num :\n");
scanf("%f", &a);
printf("Enter another num:\n");
scanf("%f", &b);
printf("Enter a character:\n");
scanf("\n%c",& ch);
if(ch=='+')
{
add=a+b;
printf("sum is %f",add);
}
else if(ch=='-')
{
sub=a-b;
printf("difference is %f",sub);
}
else if(ch=='*')
{
mul=a*b;
printf("product is %f",mul);
}
else if(ch=='/')
{
div=a/b;
printf("co-efficent is %f",div);
}
else 
{
printf("PLease enter a valid input");
}
}
