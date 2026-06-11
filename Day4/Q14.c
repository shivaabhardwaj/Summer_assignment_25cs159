#include <stdio.h>
int main()
{
int n, i, a = 0, b = 1, c;
printf("Enter the value of n: ");
scanf("%d", &n);
for(i = 1; i < n; i++)
{
c = a + b;
a = b;
b = c;
}
printf("Nth Fibonacci term = %d", a);
return 0;
}