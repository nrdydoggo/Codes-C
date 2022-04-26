
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
	int main()
	{
    // Binary Search Algorithem

		int target, low, high, mid;
		int str[10] = { 1, 3, 5, 6, 7, 9, 10, 11, 12, 14 };
		for (int i = 0; i < 3; i++)
		{
		path:
			printf("찾으실 값을 입력해주세요 = ");
			scanf("%d", &target);
			printf("\n");
			mid = 0; low = 0; high = 9;
			for (int t = 0; t < 9; t++)
			{
				printf("찾는 중...\n");
				Sleep(1500);
				mid = (low + high) / 2;
				if (target == str[mid])
				{
					printf("찾으신 값 %d는 %d번째에 존재합니다.\n\n", str[mid], mid);
					goto path;
				}
				if (target < str[mid])
				{
					high = mid - 1;
					printf("-1\n");
				}
				else if (target > str[mid])
				{
					low = mid + 1;
					printf("+1\n");
				}
			}
			printf("검색 결과가 존재하지 않습니다.\n");
		}



	}

