#include <stdio.h>
#include <windows.h>
 int test()
{
	//����ü

	// # 1. typedef �Լ�: define���� �޸�, ���� �ڷ����� �ٸ� �̸����� ������ ������ �� �� �ִ�.

	typedef unsigned short int MYINT;
	MYINT file = 0; // ���� ����� �������� ���� 2����Ʈ int �ڷ����� 'myint'��� �̸����� ������ �� ����ϴ� ��.

	// # 2. typedef �Լ��� �̿��ϸ�, �迭�� [ ] �κ��� �̸� �����ؼ� �ڷ������� �����ϴ� ���� ������ �� �ִ�.
	// ���� typedef�� �������� �ڷ����� �ѹ��� ���氡���Ͽ�, �� �������� ������ �������� �ʿ䰡 ����.
	typedef char ARRAY[10]; //1����Ʈ ������ 10�� �ε����� ���� �迭�� Ư�� �ڷ����� �̸� �־����, ���߿� �������� �� ����� �� �ִ�.
	ARRAY data = { 0 }; //��ǻ�, data[10]�̴�. data�� �迭 ũ�⸦ �����ϰ� �ʹٸ� array�ڷ����� �������ָ� �ȴ�.

	const int a = 13;


}

// ����ü ����ϱ�: struct { }
// �������� ������ struct { } ����ü �Լ� �ȿ� ������ �ٸ� �Լ��� main�Լ����� ���� + '.'+����ü �̸����� �����ؼ� ���� �����ϰ� ����� �� �ִ�.

 struct STRUCT
 {
	 char name_data[5][50];
	 int age[5];
	 int height[5];
	 int weight[5];

 };
typedef struct STRUCT strname;
// ����ü �Լ��� �ٿ��� Ư���̸����� ������ �� ���, struct ����ü ��ȣ ���� ;�� ������ typedef�� �����ؾ� �Ѵ�.

void main()
{
	// ���� ������ ����ü �Լ����� �������� ����/����ϱ�
	// ���� ������ ����ü�� struct STRUCT Ȥ�� typedef�� ���� strname�� ȣ���Ͽ�, �� �����Լ����� ����� �� �ֵ��� 
	// main�Լ� ���� ���������� �������ش�.


	// ����ü ���� main�Լ� �ȿ��� ����ϱ�
	strname dummy; // dummy������ ����ü ���� ������ ������Ѽ�, �� main�Լ��ȿ��� ��� �� �� �ֵ��� ������ ������ ���� ���̴�.
	int count = 0;
	for (int i = 0; i <= 4; i++)
	{
		// ����ü���� ���� ȣ�� �� �� �����ϱ�
		int answer = 0;
		printf("������� �̸��� �Է����ּ���.\n\n");
		scanf("%s", dummy.name_data[i]);
		printf("������� ���̸� �Է����ּ���.\n\n");
		scanf("%d", &dummy.age[i]);
		printf("������� Ű�� �����Ը� �Է����ּ���.\n");
		printf("Ű:");
		scanf("%d", &dummy.height[i]);
		printf("\n������:");
		scanf("%d", &dummy.weight[i]);
		printf("\n\n");
		printf("�Է��� �����Ͻðڽ��ϱ�? YES(0) NO(1)");
		scanf("%d", &answer);
		count = i;
		if (answer == 0)
			i = 4;
	}
	printf("�����͸� �Է��ϰ� �ֽ��ϴ�. . .");
	Sleep(2000);
	// ����ü ���� ����ϱ�
		printf("\n\n������� �����Դϴ�.\n\n");
		printf("�̸�: %s\n", dummy.name_data[count]);
		printf("����: %d��\n", dummy.age[count]);
		printf("Ű: %dcm\n", dummy.height[count]);
		printf("������: %dkg\n\n", dummy.weight[count]);
}

