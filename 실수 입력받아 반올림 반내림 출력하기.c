#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	/*
	
	*/

	double a = 0;
	double b = 0;
	char c;
	scanf("%c", &c);
	scanf("%lf", &a); //double 자료형으로 입력받을 땐 %lf 부호를 사용한다.
	scanf("%lf", &b);
	
	printf("%c\n\n", c);
	printf("반올림 1 %.2f\n반올림 2 %.2f\n", ceil(a * 100) / 100, ceil(b * 100) / 100); //반올림
	printf("반내림 %.2f\n", floor(a * 1000) / 1000); //반내림

}

