#include<stdio.h>
int main()
{
char m,g;
int a;
printf("Enter your marietal status:\n");
scanf("\n%c",&m);
printf("Enter your gender:\n");
scanf("\n%c",&g);
printf("Enter your age:\n");
scanf("\n%c",&a);
if(m =='m')
  printf("Yes you are Insured");
else if((m=='s' && g=='m') && a>30)
  printf("Woah you are Insured");
else if((m=='s' && g=='f')&& a>25)
  printf("Naice you are Insured");
else
  printf("Not Insured");
return 0;
}
