#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float func();
float x, d;

int main(void)
{
	system("chcp 1251"); 
	system("cls");
	x = 8;
	func();
	printf("��� � = 8, ��������� d = %f\n", d);
	printf("��� � = ");
	scanf_s("%f", &x);
	func();
	printf("��������� d = %f", d);
	getchar();
	getchar();
	return(0);
}

float func(void)
{
	d = (sqrt((pow(((3 * x) + 2), 2)) - (24 * x))) / ((3 * (sqrt(x))) - (2 / (sqrt(x))));
	return(0);
}
