#include<stdio.h>
int main()
{
int c=0;
char str[1000];
scanf("%s",str);
for(int i=0;str[i]!='\0';i++)
{
if(str[i]=='a' ||str[i]=='e' ||str[i]=='o' ||str[i]=='i' ||str[i]=='u')
c++;
}
if(c>=2)
   printf("Happy word");
else 
   printf("Sad word");
return 0;
}
