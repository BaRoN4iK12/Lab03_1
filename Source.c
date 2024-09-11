#include <locale.h>

#include <stdio.h>

void main()

{
	int num;
	int dym;
	setlocale(LC_ALL, "RUS");
	puts("Введите число:");
	scanf("%d", &num);
	printf("Введено число %d\n", num);
	puts("Введите второе число:");
	scanf("%d", &dym);
	printf("Сумма равна: %d\n", num + dym);
	printf("Разность равна: %d\n", num - dym);
	printf("Произведение равно: %d\n", num * dym);
	printf("Частное равно: %4.2f\n", 1. * num / dym);
	printf("Остаток равен: %d\n", dym / num);

	return 0;
}