#include<stdio.h>
void main()
{
int m1,m2,m3;
float avg;
printf("Enter marks 1:");
scanf("%d", & m1);
printf("Enter marks 2:");
scanf("%d", & m2);
printf("Enter marks 3:");
scanf("%d", & m3);
avg=(m1+m2+m3)/3;
if(avg>85) 
{
printf("HIGH ACHIEVER");
}
else if (avg>=70 && avg<=85)
{
printf("PASS");
}
else if(avg<70)
{
printf("NEEDS IMPROVEMENT KIDD");
}
}
