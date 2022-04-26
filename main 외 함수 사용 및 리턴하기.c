#include <stdio.h>

// 타 함수로 실행영역에서 값을 전달받아 리턴 후 실행영역에서 출력하기.

int main()
{
	int n1 = 0;
	int a = 50, b = 50;
	n1 = calc(a, b); // 타 함수에서 실행한 결과를 실행영역 지역변수 = 타 함수이름(인자); 형식으로 받아 사용한다.

	printf("타 함수에서 연산해서 받은 값 = %d\n", n1);
}

int calc(int num, int num2) // 타 함수에서 인자를 몇개를 만들던, 메인으로 받을 수 있는 건 한번에 하나 뿐.
{
	return num * num2;
}