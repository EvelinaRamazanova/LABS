#include <math.h>
#include <stdio.h>
float a, f,e;
float zadanie1(int n)
{
	f = 0.0;
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(1 - (((i*i) + 1) / ((i*i) + 3)));
		f += a;
	}
	return (f);
}
