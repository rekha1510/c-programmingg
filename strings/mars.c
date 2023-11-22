#include<stdio.h>
int main()
{
char str[1000];
int c=0;
scanf("%s",str);
for(int i=0;str[i]!='\0';i=i+3)
{
if(str[i]!='S')
   c++;
if(str[i+1]!='O')
   c++;
if(str[i+2]!='S')
   c++;
}
printf("%d",c);
return 0;
}
