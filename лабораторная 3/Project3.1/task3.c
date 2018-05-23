#include <math.h>
#include <stdio.h>
float a;
float zadanie3(int n, int k)
{
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(1 - (((i*i) + 1) / ((i*i) + 3)));;
		if ((i + 1) % k == 0)
			continue;
		printf("%f", a);
	}
}
