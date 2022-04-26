#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calc(float a, float b)
{
	return a * b;
}

int main()
{
	// 추의 무게를 저장할 변수와 중력의 비율을 저장할 변수를 만들고,
	// 다음 두 값을 변수에 저장하여 곱셈 계산식을 출력하는 프로그램을 작성하라.
	// 추의 무게 = 49, 중력의 비율 = 0.2683
	float result = 0;
	float weight = 49;
	float gravity = 0.2683;
	result = calc(weight, gravity);
	printf("중력무게 %.0f x 중력의 비율 %f = ",weight, gravity);
	printf("계산 결과 값 = %.6f\n\n", result);
}

