#include<stdio.h>
int main()
{
char str[1000];
int c=1;
scanf("%s",str);
for(int i=0;str[i]!='\0';i++)
{
if(str[i]>='A' && str[i]<='Z')
c++;
}
printf("%d",c);
return 0;
}
