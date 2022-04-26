#include <stdio.h>
#include <stdlib.h>

//연결리스트란: 자기가 사용할 메모리의 크기를 예측할 수 없고 그 범위가 너무 넓을 때 사용하는 자료 구조. 노드구조체가 여러개가 연결된 집합.
//사용하는 이유: 만약 사용자가 어떤 값을 입력하는 프로그램을 만드는데, 사용자가 입력한 만큼만 메모리를 사용하고 끝내고 싶을 때, 크기를 크거나 작게 지정하는 것이 아닌
//사용하는 만큼만 메모리를 사용하고 메모리를 삭제해주는 기능이, 이 연결리스트이다.
//노드란: 연결리스트에서 숫자와 주소를 함께 저장하기 위해 할당하는 메모리이다.
struct NODE
{
	int memory;
	struct NODE* p_next; //다음 노드의 주소를 가리킬 포인터
};
typedef struct NODE node;

//노드의 구성(노드가 두개인 구조체): 헤드노드 > 노드1 > 노드2 > NULL > 메모리 해제(free)


void main()
{
	node str;
	node* head_nod = malloc(sizeof(struct NODE)); // == malloc(sizeof(node));
	

	node* re = head_nod; //re: 반복용 포인터 / 반복용 포인터를 선언하고, 헤드노드의 주소를 저장.
	while (re != NULL)
	{
		re = re -> p_next;
	}
	








}