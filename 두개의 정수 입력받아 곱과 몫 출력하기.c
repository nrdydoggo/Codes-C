

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*
	두 개의 정수를 입력 받아 곱과 몫을 출력하시오.
	(먼저 입력 받는 수가 항상 크며 입력되는 두 정수는 1이상 500이하이다.)
	*/
	int a[3] = { 0 };
	int count = 0;
path:
	for (int i = 0; i < 2; i++)
	{

		scanf("%d", &a[i]);

	}
	if (a[1] > a[0])
	{
		printf("먼저 입력하는 수를 더 크게 입력해 주세요.");
		a[count] = 0;
		a[count + 1] = 0;
		goto path;
	}
	if (a[count] > 0 && a[count] < 501 && a[count + 1] > 0 && a[count + 1] < 501)
	{
		printf("%d x %d = %d\n\n", a[count], a[count + 1], a[count] * a[count + 1]);
		printf("%d / %d = %d\n\n", a[count], a[count + 1], a[count] / a[count + 1]);
	}
	else
		printf("Error\n\n");
}