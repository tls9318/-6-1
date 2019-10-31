#include <stdio.h>

int main(void)
{
	int a;

	printf("각도를 입력하세요(0~360).: ");
	scanf_s("%d", &a);

	if (a > 0 && a < 90)
		printf("1사분면\n");

	else if (a > 90 && a < 180)
		printf("2사분면\n");

	else if (a > 180 && a < 270)
		printf("3사분면\n");

	else if (a > 270 && a < 360)
		printf("4사분면\n");

	else if (a == 0)
		printf("양의 x축");

	else if (a == 90)
		printf("양의 y축");

	else if (a == 180)
		printf("음의 x축");

	else if (a == 270)
		printf("음의 y 축");

	return 0;

}