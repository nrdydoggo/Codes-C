#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	정수형 변수 한 개를 선언하여 50을 대입하고 실수형 변수 한 개를 선언하여 
	100.12를 대입한 후 다음과 같이 출력되는 프로그램을 작성하시오.
    (결과값은 소수점 이하에서 반올림) 
	*/

	int num = 50;
	float decimal = 100.12;
	float result = 0;
	result = num * decimal;
	printf("%.2f * %d = %.0f\n\n", decimal, num, result);

	
}

