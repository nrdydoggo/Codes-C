#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
int main()
{
	/*
	정수 2개를 입력받아서 첫 번째 수에는 100을 증가시켜 저장하고 두 번째 수는
	10으로 나눈 나머지를 저장한 후 두 수를 차례로 출력하는 프로그램을 작성하시오.
	*/
	typedef int ar[5];
	ar num = { 0 }, result = { 0 };
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num[i]);
		if (i == 1)
		{
			num = num[i] % 10;
			goto path;
		}
		
		 num[i] += 100;
	}
path:
	printf("%d\n%d\n\n", num[count], num[count+1]);
	free(count);
	return 0;
}

