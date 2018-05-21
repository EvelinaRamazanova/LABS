
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	system("chcp 1251"); //Переход в консоли на русский язык
	system("cls"); //Очистка консоли
	float x, d;
	x = 10;
	d = (sqrt((pow(((3 * x) + 2), 2)) - (24 * x))) / ((3 * (sqrt(x))) - (2 / (sqrt(x))));
	printf("при x=10, результат = %f\n", d);
	printf("введите x = ");
	scanf_s("%f", &x);
	d = (sqrt((pow(((3 * x) + 2), 2)) - (24 * x))) / ((3 * (sqrt(x))) - (2 / (sqrt(x))));
	printf("результат = %f", d);
	getchar();
	getchar();

	return(0);
}
