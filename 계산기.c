
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int input = 0, i = 0;
	char getc;
	int num = 0; //!팩토리얼 입력
	int result = 0;
	int cal[999] = { 0 };
	while (i <= 9999)
	{
		reset:
		    printf("==============================\n");
		    printf("진행하려면 엔터, 종료하려면 ESC\n\n");
			getc = _getch();
			if (getc == 27)
				break;
			else if (getc == 13)
			{
			path:
				printf("<계산기>\n1. 더하기\n2. 빼기\n3. 곱하기\n4. 나누기\n5. 팩토리얼\nBackspace 입력 시 이전화면");
				getc = _getch();
				if (getc == 8)
					goto reset;
				scanf("%d", &input);
				if (input == 1)
				{
					printf("더할 수 입력\n '=' 키 입력 시 계산결과 출력\n");
					printf("Backspace 키 입력시 이전화면\n");
					for (int t = 0; t < 999; t++)
					{
						getc = _getch();
						if (getc == 8)
							goto path;
						scanf("%d", &cal[i]);
						printf("+\n");
						getc = _getch();
						result += cal[i];
						if (getc == 61)
							printf("Sum = %d\n", result);
						
					}

				}
				else if (input == 2)
				{
					printf("뺄 수 입력\n '=' 키 입력 시 계산결과 출력\n");
					printf("Backspace 키 입력시 이전화면\n");
					for (int t = 0; t < 999; t++)
					{
						
					   
						getc = _getch();
						if (getc == 8)
							goto path;
						scanf("%d", &cal[i]);
						if (t == 0)
							result = cal[i];
						result = cal[i] - result;
						printf("-\n");
						getc = _getch();
						
						if (getc == 61)
							printf("Result = %d\n", result);
					}
				}
				else if (input == 3)
				{
					printf("곱할 수 입력\n '=' 키 입력 시 계산결과 출력\n");
					printf("Backspace 키 입력시 이전화면\n");
					for (int t = 0; t < 999; t++)
					{
						getc = _getch();
						if (getc == 8)
							goto path;
						scanf("%d", &cal[i]);
						if (t == 0)
							result = cal[i];
						else if (t > 0)
						result *= cal[i];
						printf("x\n");
						getc = _getch();
						if (getc == 61)
							printf("Result = %d\n", result);
					}
				}
				else if (input == 4)
				{
					printf("나눌 수 입력\n '=' 키 입력 시 계산결과 출력\n");
					printf("Backspace 키 입력시 이전화면\n");
					for (int t = 0; t < 999; t++)
					{
						getc = _getch();
						if (getc == 8)
							goto path;
						scanf("%d", &cal[i]);
						if (t == 0)
							result = cal[i];
						else if (t > 0)
							result = result / cal[i];
						printf("÷\n");
						getc = _getch();
						if (getc == 61)
							printf("Result = %d\n", result);
					}
				}
				else if (input == 5)
				{
					printf("팩토리얼 입력 \n");
					printf("Backspace 키 입력시 이전화면\n");
					getc = _getch();
					if (getc == 8)
						goto path;
					scanf("%d", &num);
					result = num;
					printf("\n\nFactorial: %d", num);
					for (int i = 0; i < (num - 1) ; i++)	
						result = result * (num - (i+1));
					printf("\nSum = %d\n\n", result);
				}
			}
	i++;
	}
}
	
	
		

