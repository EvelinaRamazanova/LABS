
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	system("chcp 1251"); //������� � ������� �� ������� ����
	system("cls"); //������� �������
	float x, d;
	x = 10;
	d = (sqrt((pow(((3 * x) + 2), 2)) - (24 * x))) / ((3 * (sqrt(x))) - (2 / (sqrt(x))));
	printf("��� x=10, ��������� = %f\n", d);
	printf("������� x = ");
	scanf_s("%f", &x);
	d = (sqrt((pow(((3 * x) + 2), 2)) - (24 * x))) / ((3 * (sqrt(x))) - (2 / (sqrt(x))));
	printf("��������� = %f", d);
	getchar();
	getchar();

	return(0);
}
