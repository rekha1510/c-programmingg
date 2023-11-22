#include<stdio.h>
int main()
{
int num=10, sum=0;
while(num<10){
sum+=--num;
if(--num%2==0)
continue;
else
break;
num--;
}
printf("sum:%d",sum);
}
