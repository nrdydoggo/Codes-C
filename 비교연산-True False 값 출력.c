
#include <stdio.h>
#include <stdlib.h>
	
int main()
{
	/*
	두 개의 정수를 입력받아서 다음과 같이 4가지 관계연산자의 결과를 출력하시오.
	이때 입력받은 두 정수를 이용하여 출력하시오. 
	입력받은 두 수에 맞는 관계연산자이면 true를 출력하고, 두 수에 맞지 않는 관계연산자이면 false를 출력한다.

	(> , < , <= , >=)

	*/
	int num[3] = { 0 };
	int count = 0, val1 = 0, val2 = 0, cy = 0;
	while (cy < 2)
	{
		scanf("%d", &num[count]);
		scanf("%d", &num[count + 1]);
		if (num[count] <= num[count + 1]) //예: 4, 5
		{
			printf("%d > %d --- %d\n", num[count], num[count + 1], 0);
			printf("%d < %d --- %d\n", num[count], num[count + 1], 1);
			printf("%d >= %d --- %d\n", num[count], num[count + 1], 0);
			printf("%d <= %d --- %d\n", num[count], num[count + 1], 1);
		}
		else //예: 5, 4
		{
			printf("%d > %d --- %d\n", num[count], num[count + 1], 1);
			printf("%d < %d --- %d\n", num[count], num[count + 1], 0);
			printf("%d >= %d --- %d\n", num[count], num[count + 1], 1);
			printf("%d <= %d --- %d\n", num[count], num[count + 1], 0);
		}
		printf("\n\n");
		cy += 1;
	}
}


