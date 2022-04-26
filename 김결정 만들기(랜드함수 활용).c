
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include <string.h>
	
	int main()
	{
		//김결정 만들기(텔레그램 선택 도우미 봇)

		srand((unsigned int) time(NULL));
		char select1 = sizeof(long long);
		char select2 = sizeof(long long);
		char list[2][100] = { NULL };
		for (int 
			t = 0; t <= 100; t++)
		{
			printf("나: 김결정!\n");
			for (int i = 0; i < 2; i++)
			{
				printf("\n선택 0%d:", i+1);
				scanf_s("%s", &list[i]);
			}
			printf("\n\n김결정: %s\n\n", list[rand() % 2]);
		}
			

		
	}


