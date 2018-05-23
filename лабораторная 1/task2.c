#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float func(float x)
{
	float d;
	d = (sqrt((pow(((3 * x) + 2), 2)) - (24 * x))) / ((3 * (sqrt(x))) - (2 / (sqrt(x))));
	return(d);
}

int main(void)
{
	system("chcp 1251"); //Переход в консоли на русский язык
	system("cls"); //Очистка консоли
	float x, d;
	x = 8;
	d = func(x);
	printf("при х = 8, результат d = %f\n", d);
	printf("введите значение х = ");
	scanf_s("%f", &x);
	d = func(x);
	printf("результат = %f", d);
	getchar();
	getchar();

	return(0);
}
