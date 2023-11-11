#include<stdio.h>
int main()
{
float n;
printf("Enter earthquake reading:");
scanf("%f",&n);
if(n<5.0)
  printf("Little or No Damage");
else if(n>=5.0 && n<5.5)
  printf("Some Damage");
else if(n>=5.5 && n<6.5)
  printf("Serious Damage");
else if(n>=6.5 && n<7.5)
  printf("Disaster");
else 
  printf("Destroyed");
return 0;
}
