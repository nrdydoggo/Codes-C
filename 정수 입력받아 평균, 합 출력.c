#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	세 개의 정수를 입력받아 합과 평균을 출력하는 프로그램을 작성하시오.
	(단 평균은 소수 이하를 버림하여 정수 부분만 출력한다.)
	*/
	int score[3] = { 0 };
	float result = 0, result2 = 0;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &score[i]);
		result2 += score[i];
		getchar();
	}
	result = ((score[count] + score[count + 1] + score[count + 2]) / 3);

	printf("스코어: %d, %d, %d\n", score[count], score[count + 1], score[count + 2]);
	printf("점수의 평균: %.0f점, 점수의 총 합: %.0f점\n\n", result, result2);
	return 0;
}

