#include <locale.h>

#include <stdio.h>

void main()

{
	int num;
	int dym;
	setlocale(LC_ALL, "RUS");
	puts("������� �����:");
	scanf("%d", &num);
	printf("������� ����� %d\n", num);
	puts("������� ������ �����:");
	scanf("%d", &dym);
	printf("����� �����: %d\n", num + dym);
	printf("�������� �����: %d\n", num - dym);
	printf("������������ �����: %d\n", num * dym);
	printf("������� �����: %4.2f\n", 1. * num / dym);
	printf("������� �����: %d\n", dym / num);

	return 0;
}