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
	system("chcp 1251"); //������� � ������� �� ������� ����
	system("cls"); //������� �������
	float x, d;
	x = 8;
	d = func(x);
	printf("��� � = 8, ��������� d = %f\n", d);
	printf("������� �������� � = ");
	scanf_s("%f", &x);
	d = func(x);
	printf("��������� = %f", d);
	getchar();
	getchar();

	return(0);
}
