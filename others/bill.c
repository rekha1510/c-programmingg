#include<stdio.h>
#include<stdlib.h>
int main()
{
float total;
char ch;
while(1) {
printf("Enter your desired item:");
scanf("%c",&ch);
int quantity;
printf("Enter the quantity:");
scanf("%d",&quantity);
switch(ch)
{
case 'P' :
   total=500*quantity;

    break;
case 'B' :
   total=200*quantity;

   break;
case 'F' :
   total=50*quantity;

   break;
case 'S' :
   total=150*quantity;

    break;
case 'E' :
     exit(0);
     break;
default:
    printf("Enter valid item");
}
}
printf("total=%f",total);

return 0;

}
