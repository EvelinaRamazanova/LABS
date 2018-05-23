#include <math.h>
#include <stdio.h>
float a, f;
float zadanie2(float e)
{
	a = e + 1.0;
	f = 0.0;
	for (int i = 0; fabs(a) <= e; ++i)
	{
		a = pow(-1, i)*(1 - (((i*i) + 1) / ((i*i) + 3)));
		f += a;
	}
	return(f);
}
