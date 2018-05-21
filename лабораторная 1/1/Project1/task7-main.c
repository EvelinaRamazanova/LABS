#include "func.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float x, d;
int main(void)
{
	system("chcp 1251");
	system("cls");
	x = 8;
	func();
	printf("при х = 8, результат d = %f\n", d);
	printf("при х = ");
	scanf_s("%f", &x);
	func();
	printf("результат d = %f", d);
	getchar();
	getchar();
	return(0);
}

