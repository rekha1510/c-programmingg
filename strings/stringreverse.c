#include<stdio.h>
int main()
{
char str[100];
int s=0;
scanf("%s",str);
for(int i=0;str[i]!='\0';i++)
s++;
for(int i=s-1;i>=0;i--)
printf("%c",str[i]);
return 0;
}
