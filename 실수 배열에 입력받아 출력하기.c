#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	세 개의 실수를 입력 받아 반올림하여 소수 셋째 자리까지 출력하는 프로그램을 작성하시오.
	*/
	// scanf밑에는 입력 버퍼를 지워주기 위해 getchar()를 사용한다.
	// 배열 형식에 입력받을 땐 &array[i]이런식으로 인덱스를 같이 작성해줘야 한다.
	float dat[4] = {0};
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%f", &dat[i]);
		getchar();
		printf("%.3f\n\n", dat[i]);
	}
		return 0;
}

