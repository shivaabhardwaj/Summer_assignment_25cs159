#include<stdio.h>
int main()
{
int a[5],b[5],i,j;
printf("Enter 5 elements of first array:\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

printf("Enter 5 elements of second array:\n");
for(i=0;i<5;i++)
scanf("%d",&b[i]);

printf("Common elements are:\n");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]==b[j])
{
printf("%d ",a[i]);
break;
}
}
}
return 0;
}