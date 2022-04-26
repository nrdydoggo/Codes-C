#include <stdio.h>
#include <stdlib.h>
int main()
{
	// i번째의 num배열 값을 5번 한번에 도는 t 2차반복문에서 빼서,
   // 음수의 값이 나오면(0보다 작으면) n에다 값을 +1 저장해준다.
   // 즉, 가장 큰 값은 빼도 음수가 나오지 않고, 가장 작은 값은 음수가 
   // 가장 많이 나오게 된다. 그 후 이 n을 배열 인덱스에 써서(num[n])
   // 음수가 4개 나오면 4번째 인덱스로 바로 가서 저장, 음수가 없으면 0번째
   // 인덱스로 가서 바로 저장, 그렇게 하면 큰값부터 가장 작은 값이 순서대로
   // rank 배열에 저장되게 된다.

   // 입력 받을 시 사용.
	int num[5] = { 0 }; // 랭킹을 매길 값들, 입력을 받아도 상관없다.
	printf("값을 5개 입력하세요\n\n");
	for (int a = 0; a < 5; a++)
	{
		printf("%d번째 값: ", a + 1);
		scanf_s("%d", &num[a]);
	}
	int rank[5] = { 0 };
	//char name[5][50] = { aaa, bbb, ccc, ddd, eee };
	int n = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int t = 0; t < 5; t++)
		{
			if (num[i] - num[t] < 0)
				n = n + 1;
		}
		if (num[i] == rank[n])
			rank[n + 1] = num[i]; // 중복되는 값이 있으면, 다음 인덱스(다음 순위)로 가서 저장한다.
		rank[n] = num[i];
		n = 0; // 5 인덱스 이내에서 계속 유지되기 위해 반드시 한번 저장후 초기화.
	}
	printf("랭킹은 다음과 같습니다.\n\n");
	for (int b = 0; b < 5; b++)
		printf("%d위: %d\n", b + 1, rank[b]);

	return 0;
}