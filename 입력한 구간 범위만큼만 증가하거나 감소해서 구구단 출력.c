
#include <stdio.h>
#include <stdlib.h>

	int main()
	{
		/*
		원하는 구구단의 범위를 입력받아 해당 구간의 구구단을 출력하는 프로그램을 작성하시오.
        <처리조건>

        (1) 구간의 처음과 끝을 입력받는다. 

        (2) 입력된 구간은 반드시 처음 입력 값이 끝의 입력 값보다 작아야 하는 것은 아니다.

        즉 입력된 구간의 범위는 증가하거나 감소하는 순서 그대로 출력되어야 한다.​ 

		a구간부터 f구간 두개를 입력받으면 a에서 f까지의 구간을 출력해야 한다. 즉, 3에서 7입력하면 3, 4, 5, 6, 7단 /
		4에서 2입력하면 4, 3, 2단 이런식으로 ++ 혹은 -- 형식으로 구간을 출력하게 한다.
		*/
		int num1 = 0,  num2 = 0;
		scanf("%d", &num1);
		scanf("%d", &num2);
		printf("\n");
		if (num1 < num2) //++
		{
			for (int i1 = num1; i1 <= num2; i1++)
			{
				for (int i2 = 0; i2 <= 9; i2++)
				{
					if (i2 == 0)
						i2 += 1;
					printf("%d x %d = %d\n", num1,i2,num1*i2);
				}
				num1++;
				printf("\n");
			}
			return 0;
		}
		else if (num1 > num2) //--
		{
			for (int t1 = num1; t1 >= num2; t1--)
			{
				for (int t2 = 0; t2 <= 9; t2++)
				{
					if (t2 == 0)
						t2 += 1;
					printf("%d x %d = %d\n", num1, t2, num1 * t2);
				}
				num1--;
				printf("\n");
			}
			return 0;
		}
		else if (num1 < 2 && num1 > 9)
			printf("INPUT ERROR!");
		else if (num2 < 2 && num2 > 9)
			printf("INPUT ERROR!");

	}

