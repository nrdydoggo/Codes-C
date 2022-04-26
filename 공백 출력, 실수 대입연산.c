#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	실수형 변수를 2개 선언한 후 각각에 80.5 22.34를 대입한 후 두 수의 합을 구하여 각각의 숫자를
	10칸씩 오른쪽에 맞추어 소수 둘째자리까지 출력하는 프로그램을 작성하시오.
	*/


	float n1 = 80.5, n2 = 22.34;
	float result = 0;
	for (int i = 0; i < 2; i++)
	{
		if (i == 1)
		{
			printf("%.2f", n2);
			goto path;
		}
		printf("%.2f", n1);
	path:
		for (int i2 = 0; i2 < 10; i2++)
		{
			
			printf(" ");

		}
	}
	result = n1 + n2;
		printf("%.2f", result);
		return 0;
	


}

