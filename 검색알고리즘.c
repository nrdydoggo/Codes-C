#include <stdio.h>
#include <windows.h>//sleep �Լ��� ����� �� ����

int main()
{
	//��¥�� �Է¹޴µ�, ��¥�� �ѱ��̳� ��� ���� ���ڸ� �ν��ؼ� �� ��¥ �迭�� ����ִ°��� ���.
	//�˻��ؼ� ã�� �� �ִ� ���α׷��� ���� ��.
	//�迭�̸��� Ư�� ��(��:november)�� �ϰ�, 0���� �����ؼ� 31���� �������ε��� ��, ũ��� 32. ���� 0�̳� 31�̻��� �Է¹����� �������.

	int cyear[21] = { 0 };
	int cmonth[13] = { 0 };
	int cday[32] = { 0 };
	int year= 0;//22��
	int month =0;//264��
	int day =0;//8184��
	char answer[10] = { 0 };
	int yy = 0;
	int mm = 0;
	int dd = 0;
	int storage = 0;
	int week[8185];
	int chara[7] = { 97, 98, 99, 100, 101, 102, 103 };
	// 97~103 a~g���� 7�� �ƽ�Ű�ڵ带 �����ؼ�, �� �ƽ�Ű�ڵ忡 ���� ��~�� ������ ����ϴ� ����� ä���Ұ�.
	printf("Ķ������ �����͸� �ۼ��ϰ� �ֽ��ϴ�...\n\n");
	Sleep(3000);
	// Ķ���� ���
	for (int ii = 0; ii <= 50; ii++)
	{
		for (int i = 0; i < 10; i++)
		{
			printf("\n��ü Ķ������ ǥ���Ͻðڽ��ϱ�? (Y/N)");
			scanf("%s", &answer[i]); //�迭�� ���ڿ��� ������ ��, %s�������� �Է��� �޾ƾ� �Ѵ�. &������ȣ���������� �����̸��� ����, �ݺ����� ��쿣[�ݺ�������]�� �־��ش�

			if (answer[i] == 121)
			{
				// �� �� �� ��¥ ��� �ڵ�
				for (int a = 0; a <= 21; a++)
				{
					if (a >= 1)
					{
						cyear[a] = a;
						printf("20%d��\n\n", cyear[a]);
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
								printf("%d�� %d��\n\n", cmonth[b], cday[c]);
							}
						}
					}
				}
				printf("%d�׽�Ʈ", answer[i]);
			}

			//�Է��� ��¥�� �� ��¥ 8184���� ã�� ����
			//(31*12)*(yy-1)+(31*(mm-1))+dd  (yy=�Է¹޴� �⵵, mm=�Է¹޴� ��, dd�Է¹޴� ��¥)
			//���� ������ �ؼ�, ���� ���ڸ� Ư�� ������ ������, week[i1]���� ã��, �� ã�� week[i1]�� 97~103�� �ϳ��� �� ������ ���
			else if (answer[i] == 110)
			{

				for (int i1 = 0; i1 <= 8184; i1++)
				{
					for (int i2 = 0; i2 <= 6; i2++)
					{
						week[i1] = chara[i2];
						printf("�⵵�� �Է����ּ���.");
						scanf("%d", &yy);
						printf("���� �Է����ּ���.");
						scanf("%d", &mm);
						printf("���� �Է����ּ���");
						scanf("%d", &dd);
						storage = (31 * 12) * (yy - 1) + (31 * (mm - 1)) + dd;

						if (i1 == storage && week[i1] == 97)
							printf("������ �Դϴ�.");
						else if (i1 == storage && week[i1] == 98)
							printf("ȭ���� �Դϴ�.");
						else if (i1 == storage && week[i1] == 99)
							printf("������ �Դϴ�.");
						else if (i1 == storage && week[i1] == 100)
							printf("����� �Դϴ�.");
						else if (i1 == storage && week[i1] == 101)
							printf("�ݿ��� �Դϴ�.");
						else if (i1 == storage && week[i1] == 102)
							printf("����� �Դϴ�.");
						else if (i1 == storage && week[i1] == 103)
							printf("�Ͽ��� �Դϴ�.");
					}
				}
			}
			else
				printf("error");
		}
	}
		
	
	return 0;



}