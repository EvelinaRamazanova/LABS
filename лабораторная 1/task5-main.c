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
	printf("��� � = 10, ��������� d = %f\n", d);
	printf("���� �������� � = ");
	scanf_s("%f", &x);

	d = func(x);
	printf("�� ��������� d = %f", d);
	getchar();
	getchar();

	return(0);
}