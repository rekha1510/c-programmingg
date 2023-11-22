#include<stdio.h>
int main()
{
char str1[100],str2[100];
int c=0,d=0;
scanf("%s %s",str1,str2);
for(int i=0;str1[i]!='\0';i++)
c++;
for(int i=0;str2[i]!='\0';i++)
d++;

printf(" before swap s1= %s\n",str1);

printf(" before swap s1= %s\n",str2);


char str[d+1];
for(int i=0;i<=d;i++)
str[i]=str1[i];
for(int i=0;i<=d;i++)
str1[i]=str2[i];
for(int i=0;i<=d;i++)
str2[i]=str[i];



printf(" after swap s1= %s\n",str1);

printf(" after swap s1= %s\n",str2);

return 0;
}
