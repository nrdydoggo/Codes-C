
#include <stdio.h>
#include <stdlib.h>

	int main()
	{
		char stt[3][10] = { "first", "second", "third" };
		for (int t = 0; t < 3; t++)
		{
			printf("%s\n", stt[t]);
			for (int i = 0; i < 10; i++)
				printf("@");
			printf("\n");
		}
	}

