//pattern to print 12345 1234 123 12 1
#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
while( n != 0 )
{
printf("%d\n",n);
n=n/10;

}
return 0;
}
