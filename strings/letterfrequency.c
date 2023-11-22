#include<stdio.h>
int main()
{
char str[100];
char ch;
int count=0;
scanf("%s",str);
printf("Enter the letter u want:");
scanf("\n%c", &ch);
for(int i=0;str[i]!='\0';i++) {
if(str[i]==ch)
  count++;
}
printf("%d times", count);
return 0;
}
