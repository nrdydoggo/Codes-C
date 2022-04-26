#include <stdio.h>
 int main()
{
	 char Str[100][100] = { "Jordan", "10","27" }; //찾을 문자열 스토리지
	 char input[100][100];
	 gets(input); //긴 문자열을 입력받을 때 사용.
	 //문자열을 2차원배열으로 할 땐, 검색하거나 퀴즈를 만들때도 2차 반복문으로 해줘야 제대로 찾을 수 있음.
	 for (int i = 0; i < 100; i++)
	 {
		 for (int ii = 0; ii < 100; ii++)
		 {
			 printf("input %d, Str %d", (int)input[i][ii], (int)Str[i][ii]); //문자열의 아스키코드 출력
			 if (input[i][ii] == Str[i][ii])
			 {
				 printf("\n정답!");
				 printf("\n찾으신 문자열은 %d번째에 있습니다.", i);
			 }
			 break;
		 }
		 break;
	 }
}