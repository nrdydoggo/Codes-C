
#include <stdio.h>
#include <stdlib.h>
	
	int main()
	{
		/*
두 개의 정수를 입력받아서, 
첫 번째 줄에는 두 정수의 값이 같으면 1 아니면 0을 출력하고, 
두 번째 줄에는 같지 않으면 1 같으면 0을 출력하는 프로그램을 작성하시오.
		*/
		
		int in1[3] = { 0 }, in2[3] = { 0 };
		int count = 0, sel = 0, cycle = 0;
		while (cycle <= 10)
		{
			printf("1. ==연산\n2. !=연산 선택\n\n");
			scanf("%d", &sel);
			if (sel == 1)
			{
				printf("1. ==연산\n\n");
				for (int i = 0; i < 2; i++)
					scanf("%d", &in1[i]);
				if (in1[count] == in1[count + 1])
					printf("1(True)\n");
				else
					printf("0(False)\n\n");
			}
			else if (sel == 2)
			{
				printf("2. !=연산\n\n");
				for (int t = 0; t < 2; t++)
					scanf("%d", &in2[t]);
				if (in2[count] == in2[count + 1])
					printf("0(False)\n");
				else
					printf("1(True)\n\n");
			}
			else
				printf("Error\n");
			cycle++;
		}
	}


