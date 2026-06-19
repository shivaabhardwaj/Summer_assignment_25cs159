#include<stdio.h>
int main()
{
int a[100],i,j,n,count,max=0,element;

printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
count++;
}

if(count>max)
{
max=count;
element=a[i];
}
}

printf("Maximum frequency element = %d",element);

return 0;
}