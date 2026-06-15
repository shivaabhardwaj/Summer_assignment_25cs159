#include<stdio.h>
int armstrong(int n)
{
int num=n,rem,sum=0;
while(n>0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(sum==num)
return 1;
else
return 0;
}
int main()
{
int n;
scanf("%d",&n);
if(armstrong(n))
printf("Armstrong Number");
else
printf("Not an Armstrong Number");
return 0;
}