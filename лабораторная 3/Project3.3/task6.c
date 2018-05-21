#include <stdio.h>
#include "funcs.h"

int main(void)
{
	system("chcp 1251");
	int i = 0;
	int n;
	do
	{
		system("cls");
		printf("№1\n");
		printf("№2\n");
		printf("№3\n");
		printf("№4\n");
		printf("№5\n");
		printf("№6(Выход)\n\n");
		int n = 0, k = 0;
		float e = 0.0;
		printf("Введите номер задания : ");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1:
			system("cls");
			printf("№1\n");
			printf("Число слагаемых n:");
			scanf_s("%d", &n);
			printf("Сумма=%f\n\n", zadanie1(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("№2\n");
			printf("Точность E =");
			scanf_s("%f", &e);
			printf("Сумма =%f\n\n", zadanie2(e));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("№3\n");
			printf("Число n= ");
			scanf_s("%d", &n);
			printf("Число k= ");
			scanf_s("%d", &k);
			printf("Последовательность = ");
			zadanie3(n, k);
			system("pause");
			break;

		case 4:
			system("cls");
			printf("№4\n");
			printf("Точность E =");
			scanf_s("%f", &e);
			printf("Номер = %d\n\n", zadanie4(e));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("№5\n");
			printf("E = ");
			scanf_s("%f", &e);
			printf("Номер = %d\n\n", zadanie5(e));
			system("pause");
			break;

		case 6:
			i = -1;
			break;

		default:
			printf("Ошибка ввода");
			system("pause");
		}
	}
	system("pause");
	return (0);
}
