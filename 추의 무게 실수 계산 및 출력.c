#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calc(float a, float b)
{
	return a * b;
}

int main()
{
	// ���� ���Ը� ������ ������ �߷��� ������ ������ ������ �����,
	// ���� �� ���� ������ �����Ͽ� ���� ������ ����ϴ� ���α׷��� �ۼ��϶�.
	// ���� ���� = 49, �߷��� ���� = 0.2683
	float result = 0;
	float weight = 49;
	float gravity = 0.2683;
	result = calc(weight, gravity);
	printf("�߷¹��� %.0f x �߷��� ���� %f = ",weight, gravity);
	printf("��� ��� �� = %.6f\n\n", result);
}

