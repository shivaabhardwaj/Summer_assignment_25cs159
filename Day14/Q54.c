#include<stdio.h>
int main()
{
int a[100],n,i,element,count=0;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to find frequency: ");
scanf("%d",&element);
for(i=0;i<n;i++)
{
if(a[i]==element)
{
count++;
}
}
printf("Frequency of %d = %d",element,count);
return 0;
}