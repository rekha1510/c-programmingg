#include<stdio.h>
int main()
{
char str1[100],str2[100];
int c=0;
scanf("%s %s",str1,str2);
for(int i=0;str1[i]!='\0';i++)
   {
    for(int j=0;str2[j]!='\0';j++)
       {
      if(str2[j]==str1[i])
          c=1;
          break;
       }
   }
if(c==1)
printf("Yes");
else printf("no");
return 0;
}
