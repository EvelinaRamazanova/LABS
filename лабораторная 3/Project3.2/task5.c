#include <math.h>
#include "funcs.h"
float a;

int task5(float e)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*(1 - (((pow(i, 2)) + 1) / ((pow(i, 2)) + 3)));
		if (fabs(a) <= e && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	}
}
