﻿#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
int main()
{
	/*
	실수의 yard(야드)를 입력받아 cm(센티미터)로 환산하여 입력값과 환산한 값을 출력 예와 
	같이 소수 둘째자리에서 반올림하여 첫째자리까지 출력하는 프로그램을 작성하시오. (단 1야드 = 91.44cm로 한다.)  
    
	입력은 "yard? "라고 먼저 출력하고, 실수를 입력받는다.  실수는 "double"로 한다.
	*/
	
	double yd = 91.44, input = 0;
	double result = 0;
	printf("cm로 변환할 야드 입력(1Yard == 91.44cm): ");
	scanf("%lf", &input);
	getchar();
	printf("\n\n변환중...");
	Sleep(2000);
	yd = yd * input;
	result = ceil((yd * 10) / 10);
	printf("\n\nYard to cm: %.1f",result);

}

