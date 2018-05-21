#include <math.h>
float a;
int m = -1;
int zadanie4(float e)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*(1 - (((i*i) + 1) / ((i*i) + 3)));
		if (fabs(a) <= e)
		{
			m = i + 1;
			break;
		}
	}
	return(m);
}
