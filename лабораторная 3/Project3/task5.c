#include <math.h>
float a;

int zadanie5(float e)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*(1 - (((pow(i, 2)) + 1) / ((pow(i, 2)) + 3)));
		if (fabs(a) <= e && a < 0.0)
		{
			return(i + 1);
		}
	}
}
