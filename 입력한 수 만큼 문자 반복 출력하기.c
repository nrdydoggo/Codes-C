
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	문자열 "~!@#$^&*()_+|" 를 출력하는 함수를 작성하고 정수를 입력받아 입력받은
	수만큼 함수를 호출하는 프로그램을 작성하시오.
	* 주의 : 문자열을 잘 확인하세요. ('%'이 없음)
	* 문자열을 복사해서 출력해도 됩니다.
	*/
	int input = 0;
	scanf("%d", &input);
	for (int i = 0; i < input; i++)
	{
		printf("~!@#$^&*()_+|\n");
	}
	return 0;
}


