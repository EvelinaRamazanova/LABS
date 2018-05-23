#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float func(float x)
{
	float d;
	d = (sqrt((pow(((3 * x) + 2), 2)) - (24 * x))) / ((3 * (sqrt(x))) - (2 / (sqrt(x))));
	return(d);
}