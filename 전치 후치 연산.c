
#include <stdio.h>
#include <stdlib.h>
	
	int main()
	{
		/*
		두 개의 정수를 입력받아서  첫 번째수는 후치 증가 연산자를 사용하고
		두 번째 수는 전치 감소 연산자를 사용하여 두 수의 곱을 구한 후 각각의 값을 출력하는 프로그램을 작성하시오.
		*/
		int num[3] = { 0 };
		int count = 0, result = 0;
		for (int i = 0; i < 2; i++)
			scanf("%d", &num[i]);
		num[count] = num[count]++;
		num[count + 1] = num[count + 1]--;
		result = num[count] * num[count + 1];
		printf("\nResult =\n%d\n%d\nSum = %d", num[count], num[count + 1], result);
		
	}


