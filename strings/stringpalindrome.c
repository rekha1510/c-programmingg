#include<stdio.h>
int main()
{
int c=0;
char str[1000],str1[1000];
scanf("%s",str);
for(int i=0;str[i]!='\0';i++)
    c++;
for(int i=c;i>=0;i--)
    {
     for(int j=0;j<=c;j++)
     str1[i]=str[j];
     }
printf("%s",str1);

return 0;
}
