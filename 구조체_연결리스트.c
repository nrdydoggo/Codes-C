#include <stdio.h>
#include <stdlib.h>


/*
연결리스트 개념 정리: 일단 기본적으로 값을 변수에 저장하기 위해 정적이던 동적이던 메모리를 할당받아야 되는데, 사용자가 입력할 값이 큰지 작은지 모르는 상태에서
프로그램이 알아서 입력받는 만큼 메모리를 할당받고 종료해주기 위해 만드는 것이 연결리스트이다. 5를 입력할 수도 있고 7000을 입력할 수도 있는 상황에서
30크기의 메모리는 너무 작고 10,000 크기의 메모리는 낭비가 심하기에 이런 연결리스트를 구조체를 사용하여 효율적으로 메모리를 할당받게끔 하는것이다.

일단 그러기 위해 연결리스트는 숫자를 사용자가 입력하고 연결해서 다음으로 넘어가서 입력하다 끝나는 형식인데, 일반적인 포인터로 값을 입력하면 아래와 같이 된다.

포인터1 --> 숫자1 X 포인터 2 --> 숫자 2

이런식으로 포인터1은 숫자1을 가리키기에, 포인터2를 가리켜서 연결시킬 수 없다. 그래서 구조체의 *next 포인터를 사용해서

헤드포인터 -->포인터1 --> 숫자1  포인터2 --> 숫자2  NULL --> free(포인터1); free(포인터2);(메모리 삭제)
				 ↘ next포인터 ↗      ↘next포인터↗

이런식으로 연결을 해주어서 계속 입력받을 수 있게 하는것이다. 이것을 실제 코드 형식으로 표현하면

head_nod(포인터1)->next(next포인터) = nod1(포인터2의 주소);
nod1->data = 10;(숫자1)
여기서 nod1->data식으로 값을 저장하는 이유는 nod1이 main의 지역변수이고, data는 구조체 지역변수여서 main에서 data를 그냥 사용할 수 없기에
nod1(main지역변수)->data(구조체 지역변수) = 10; 이런식으로 저장을 해주는 것이다.

*/


typedef struct storage
{
	struct storage* next; // 연결리스트 구조체에서 다음 노드로 넘어가기 위해 다음주소를 저장할 구조체 포인터.
	int data; // 연속으로 값을 입력해줄 데이터 스톡.
}node;


void main()
{
	node* headNODE = NULL;
	headNODE = (node*)malloc(sizeof(node)); //첫번째 노드. 값이 없고, 구조체의 메모리를 할당하며 동시에 NODE 구조체의 주소도 저장해준다.
	node* nod1 = NULL;
	nod1 = (node*)malloc(sizeof(node));
	node* nod2 = NULL;
	nod2 = (node*)malloc(sizeof(node));
	node* nod3 = NULL;
	nod3 = (node*)malloc(sizeof(node)); //마찬가지로 다음으로 넘어가는 다음노드들도 전부 구조체의 메모리를 할당받아야 한다. 할당받지 않으면 값 저장 자체가 안됨.
	headNODE->next = nod1;
	nod1->data = 100;
	nod1->next = nod2;
	nod2->data = 200;
	nod2->next = nod3;
	nod3->data = 300;
	nod3->next = NULL;

	node* i = headNODE->next; //반복변수, 처음 시작한 헤드 노드의 주소를 저장. 
	while (i != NULL)
	{
		printf("연결리스트 값 = %d\n", i->data);
		i = i->next;
	}



}

