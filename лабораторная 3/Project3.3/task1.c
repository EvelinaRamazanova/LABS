#include <math.h>
#include "funcs.h"

float a, f;
float task1(int n)
{

	f = 0.0;
	int i = 0;

	do
	{
		a = pow(-1, i)*(1 - (((pow(i, 2)) + 1) / ((pow(i, 2)) + 3)));
		f += a;
		++i;
	} while (i < n);
	return f;
}
