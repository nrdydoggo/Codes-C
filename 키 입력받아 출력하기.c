
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int main()
{
	/*
	키를 입력받아 출력하는 프로그램을 작성하라.
   (입력할때 "height = " 문장을 먼저 출력하고 키를 입력 받아야 합니다.)
	*/
	int height = 0;
	printf("키를 입력해주세요\n");
	printf("당신의 키 = ");
	scanf("%d", &height);
	printf("\n\n잠시만 기다려주세요...");
	Sleep(2000);
	if (height > 0 && height < 999)
		printf("\n\n당신의 키는 %dcm 입니다.", height);
	else
		printf("\n\n제대로 된 키를 입력해주세요");
}
