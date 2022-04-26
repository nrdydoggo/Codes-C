#include <stdio.h>
#include <windows.h>
 int test()
{
	//구조체

	// # 1. typedef 함수: define과는 달리, 기존 자료형을 다른 이름으로 선언해 재정의 할 수 있다.

	typedef unsigned short int MYINT;
	MYINT file = 0; // 음수 양수가 지정되지 않은 2바이트 int 자료형을 'myint'라는 이름으로 재정의 후 사용하는 것.

	// # 2. typedef 함수를 이용하면, 배열의 [ ] 부분을 미리 선언해서 자료형에서 선언하는 것을 생략할 수 있다.
	// 또한 typedef로 재정의한 자료형을 한번에 변경가능하여, 각 변수마다 일일이 변경해줄 필요가 없다.
	typedef char ARRAY[10]; //1바이트 단위의 10개 인덱스를 가진 배열을 특정 자료형에 미리 넣어놓고, 나중에 변수선언 시 사용할 수 있다.
	ARRAY data = { 0 }; //사실상, data[10]이다. data의 배열 크기를 수정하고 싶다면 array자료형을 수정해주면 된다.

	const int a = 13;


}

// 구조체 사용하기: struct { }
// 여러개의 변수를 struct { } 구조체 함수 안에 넣으면 다른 함수나 main함수에서 변수 + '.'+구조체 이름으로 선언해서 값을 대입하고 사용할 수 있다.

 struct STRUCT
 {
	 char name_data[5][50];
	 int age[5];
	 int height[5];
	 int weight[5];

 };
typedef struct STRUCT strname;
// 구조체 함수를 줄여서 특정이름으로 재정의 할 경우, struct 구조체 괄호 끝에 ;를 붙히고 typedef로 선언해야 한다.

void main()
{
	// 위에 선언한 구조체 함수안의 변수들을 대입/사용하기
	// 위에 선언한 구조체를 struct STRUCT 혹은 typedef로 줄인 strname을 호출하여, 이 메인함수에서 사용할 수 있도록 
	// main함수 안의 지역변수에 지정해준다.


	// 구조체 변수 main함수 안에서 사용하기
	strname dummy; // dummy변수를 구조체 전용 변수로 변경시켜서, 이 main함수안에서 사용 할 수 있도록 대행자 격으로 만든 것이다.
	int count = 0;
	for (int i = 0; i <= 4; i++)
	{
		// 구조체안의 변수 호출 후 값 대입하기
		int answer = 0;
		printf("사용자의 이름을 입력해주세요.\n\n");
		scanf("%s", dummy.name_data[i]);
		printf("사용자의 나이를 입력해주세요.\n\n");
		scanf("%d", &dummy.age[i]);
		printf("사용자의 키와 몸무게를 입력해주세요.\n");
		printf("키:");
		scanf("%d", &dummy.height[i]);
		printf("\n몸무게:");
		scanf("%d", &dummy.weight[i]);
		printf("\n\n");
		printf("입력을 종료하시겠습니까? YES(0) NO(1)");
		scanf("%d", &answer);
		count = i;
		if (answer == 0)
			i = 4;
	}
	printf("데이터를 입력하고 있습니다. . .");
	Sleep(2000);
	// 구조체 변수 출력하기
		printf("\n\n사용자의 정보입니다.\n\n");
		printf("이름: %s\n", dummy.name_data[count]);
		printf("나이: %d세\n", dummy.age[count]);
		printf("키: %dcm\n", dummy.height[count]);
		printf("몸무게: %dkg\n\n", dummy.weight[count]);
}

