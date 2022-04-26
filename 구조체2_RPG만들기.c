#include <stdio.h>
#include <stdlib.h>


struct STR
{
	char Name[5][50];
	int Level;
	int HP;
	int MP;
	int STR_val;
	int INT_val;
	int DEX_val;
	int LUK_val;
};
typedef struct STR str;


void main()
{
	str name;
	int stat_p = 5;
	printf("모험가의 이름을 입력해주세요.\n\n");
	scanf("%s", name.Name);
	for (int i = 0 + 1; i <= 99; i++)
	{
		printf("모험가 정보\n\n");
		printf("==============================\n");
		name.Level = i;
		name.HP = 500;
		name.MP = 300;
		name.STR_val = stat_p;
		name.INT_val = stat_p;
		name.DEX_val = stat_p;
		name.LUK_val = stat_p;
		printf("모험가 이름: %s\n\n", name.Name);
		printf("HP:%d\nMP:%d\n\nSTR:%d\nINT:%d\nDEX:%d\nLUK:%d\n\n", name.HP, name.MP, name.STR_val, name.INT_val, name.DEX_val, name.LUK_val);
		free(i);
		free(stat_p);
		return 0;
	}


}
