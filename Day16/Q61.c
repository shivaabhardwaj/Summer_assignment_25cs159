#include<stdio.h>
int main()
{
int arr[]={1,2,3,5,6};
int n=6,i,sum=0,total;
for(i=0;i<n-1;i++)
{
sum=sum+arr[i];
}
total=n*(n+1)/2;
printf("Missing number = %d",total-sum);
return 0;
}