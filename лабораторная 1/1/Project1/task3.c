#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x);
int main(void)
{
	system("chcp 1251"); 
	system("cls"); 

	float x, d;
	x = 10;
	d = func(x);
	printf("при х = 10, результат d = %f\n", d);
	printf("если значение х = ");
	scanf_s("%f", &x);

	d = func(x);
	printf("то результат d = %f", d);
	getchar();
	getchar();

	return(0);
}
float func(float x)
{
	float d;
	d = (sqrt((pow(((3 * x) + 2), 2)) - (24 * x))) / ((3 * (sqrt(x))) - (2 / (sqrt(x))));
	return(d);
}
