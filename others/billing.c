#include<stdio.h>
int main()
{
int u;
float t;
printf("Enter the number of units:");
scanf("%d",&u);
if(u>0 && u<=200){
  t=0.5*u;}
else if(u>201 && u<=400){
  t=(0.65*u)+(0.5*u);}
else if(u>401 && u<=600){
  t=(0.8*u)+(0.65*u)+(0.5*u);}
else {
  t=(1*u)+(0.8*u)+(0.65*u)+(0.5*u);}
printf("Total - %f",t);
return 0;
}
