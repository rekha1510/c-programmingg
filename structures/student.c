#include<stdio.h>
struct student 
{
char name[100];
long int  id;
float weight;
float height;
char gender[100];
};
int main()
{
struct student c[10];
int temp;
for(int i=0;i<4;i++)
{
printf("\nEnter name:");
scanf("\n%[^\n]s",c[i].name);
printf("\nEnter student id:");
scanf("%ld",&c[i].id);
printf("\nEnter student weight:");
scanf("%f",&c[i].weight);
printf("\nEnter student height:");
scanf("%f",&c[i].height);
printf("\nEnter student gender:");
scanf("%s",c[i].gender);
}
for(int i=0;i<4;i++)
{
if(c[i].height>c[i+1].height)
{
temp=c[i].height;
c[i].height=c[i+1].height;
c[i+1].height=temp;
}
printf("%s\n",c[i].name);
printf("%s\n",c[i].gender);
printf("%ld\n",c[i].id);
printf("%.2f\n",c[i].weight);
printf("%.2f\n\n\n",c[i].height);

}
return 0;
}


