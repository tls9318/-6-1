#include <stdio.h>

int main(void)
{
	int a;

	printf("������ �Է��ϼ���(0~360).: ");
	scanf_s("%d", &a);

	if (a > 0 && a < 90)
		printf("1��и�\n");

	else if (a > 90 && a < 180)
		printf("2��и�\n");

	else if (a > 180 && a < 270)
		printf("3��и�\n");

	else if (a > 270 && a < 360)
		printf("4��и�\n");

	else if (a == 0)
		printf("���� x��");

	else if (a == 90)
		printf("���� y��");

	else if (a == 180)
		printf("���� x��");

	else if (a == 270)
		printf("���� y ��");

	return 0;

}