int main()
{
	/*
	1야드(yd)는 91.44cm이고 1인치(in)는 2.54cm이다.
	2.1야드와 10.5인치를 각각 cm로 변환하여 다음 형식에 맞추어 소수 첫째자리까지 출력하시오.​
	*/

	float yd = 91.44;
	float inch = 2.54;
	printf("2.1 yard to cm = %.1fcm\n10.5 inch to cm = %.2fcm\n\n", yd * 2.1, inch * 10.5);
	printf("Note::\n1 yard = %.2fcm\n1 inch %.2fcm", yd, inch);
}

