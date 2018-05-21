#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>  /*Использование функции system*/
float func_1(float x, float y);
float func_2(float x);
int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	float x, y, f;
	int n;
	printf("Выберите задание 1 или 2:\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
	{

		printf("Выбрано 1 задание\n");
		printf("Введите x =");
		scanf_s("%f", &x);
		printf("Введите y =");
		scanf_s("%f", &y);
		func_1(x, y);
		printf("%d", func_1(x, y));
	}
	break;
	case 2:
	{
		printf("Выбрано 2 задание\n");
		printf("Введите x =");
		scanf_s("%f", &x);
		func_2(x);
		printf("%f", func_2(x));
	}
	break;
	default:
		printf("Неправильный ввод ");
		break;
	}

	getchar();
	getchar();

	return(0);
}

float func_1(float x, float y)
{
	if ((x*x + y * y <= 1) && (x >= 0 && y <= 0) || (x <= 0 && y >= 0))
		return(1);
	else 
		return(0);
	}

float func_2(float x)
{
	float f;
	x <= 3 ? (f = (12/((2*(pow(x,2)))+1)) ): (f = (1.2*(pow(x, 2)))-(3*x)-9);
	return(f);
}
