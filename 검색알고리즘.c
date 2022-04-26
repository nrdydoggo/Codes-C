#include <stdio.h>
#include <windows.h>//sleep 함수를 사용할 수 있음

int main()
{
	//날짜를 입력받는데, 날짜에 한글이나 영어가 들어가도 숫자를 인식해서 그 날짜 배열에 들어있는값을 출력.
	//검색해서 찾을 수 있는 프로그램을 만들 것.
	//배열이름은 특정 월(예:november)로 하고, 0부터 시작해서 31까지 끝나는인덱스 즉, 크기는 32. 만약 0이나 31이상을 입력받으면 오류출력.

	int cyear[21] = { 0 };
	int cmonth[13] = { 0 };
	int cday[32] = { 0 };
	int year= 0;//22년
	int month =0;//264월
	int day =0;//8184일
	char answer[10] = { 0 };
	int yy = 0;
	int mm = 0;
	int dd = 0;
	int storage = 0;
	int week[8185];
	int chara[7] = { 97, 98, 99, 100, 101, 102, 103 };
	// 97~103 a~g까지 7개 아스키코드를 저장해서, 그 아스키코드에 따라 월~일 요일을 출력하는 방식은 채택할것.
	printf("캘린더에 데이터를 작성하고 있습니다...\n\n");
	Sleep(3000);
	// 캘린더 출력
	for (int ii = 0; ii <= 50; ii++)
	{
		for (int i = 0; i < 10; i++)
		{
			printf("\n전체 캘린더를 표시하시겠습니까? (Y/N)");
			scanf("%s", &answer[i]); //배열에 문자열을 저장할 땐, %s형식으로 입력을 받아야 한다. &포인터호출형식으로 변수이름을 쓰고, 반복문인 경우엔[반복문변수]를 넣어준다

			if (answer[i] == 121)
			{
				// 년 월 일 날짜 출력 코드
				for (int a = 0; a <= 21; a++)
				{
					if (a >= 1)
					{
						cyear[a] = a;
						printf("20%d년\n\n", cyear[a]);
					}
					for (int b = 0; b <= 12; b++)
					{
						if (b >= 1)
							cmonth[b] = b;
						for (int c = 0; c <= 31; c++)
						{
							if (b >= 1 && c >= 1)
							{
								cday[c] = c;
								printf("%d월 %d일\n\n", cmonth[b], cday[c]);
							}
						}
					}
				}
				printf("%d테스트", answer[i]);
			}

			//입력한 날짜를 총 날짜 8184에서 찾는 공식
			//(31*12)*(yy-1)+(31*(mm-1))+dd  (yy=입력받는 년도, mm=입력받는 월, dd입력받는 날짜)
			//위의 연산을 해서, 나온 숫자를 특정 변수에 저장후, week[i1]에서 찾고, 그 찾은 week[i1]이 97~103중 하나일 때 요일을 출력
			else if (answer[i] == 110)
			{

				for (int i1 = 0; i1 <= 8184; i1++)
				{
					for (int i2 = 0; i2 <= 6; i2++)
					{
						week[i1] = chara[i2];
						printf("년도를 입력해주세요.");
						scanf("%d", &yy);
						printf("달을 입력해주세요.");
						scanf("%d", &mm);
						printf("일을 입력해주세요");
						scanf("%d", &dd);
						storage = (31 * 12) * (yy - 1) + (31 * (mm - 1)) + dd;

						if (i1 == storage && week[i1] == 97)
							printf("월요일 입니다.");
						else if (i1 == storage && week[i1] == 98)
							printf("화요일 입니다.");
						else if (i1 == storage && week[i1] == 99)
							printf("수요일 입니다.");
						else if (i1 == storage && week[i1] == 100)
							printf("목요일 입니다.");
						else if (i1 == storage && week[i1] == 101)
							printf("금요일 입니다.");
						else if (i1 == storage && week[i1] == 102)
							printf("토요일 입니다.");
						else if (i1 == storage && week[i1] == 103)
							printf("일요일 입니다.");
					}
				}
			}
			else
				printf("error");
		}
	}
		
	
	return 0;



}