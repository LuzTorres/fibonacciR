#include <stdio.h>
{
	unsigned int a=0, b=1, c;
	if (n<2)
{
	return n;
}
for (int i=1; i<n; ++1)
{
	c=a+b;
	a=b;
	b=c;
}
return c;
unsigned int fibonacciR(unsigned int n)
{
	if (n<2)
	{
		return n;
	}
	return fibonacciR(n-2)+fibonacciR(n-1);
}
