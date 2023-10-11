#include<stdio.h>
int main()
{
int yr;
scanf("%d",&yr);
if(yr%4)
printf("LEAP YEAR");
else if(yr%400)
printf("LEAP YEAR");
else 
printf("NOT A LEAP YEAR");
return 0;
}
