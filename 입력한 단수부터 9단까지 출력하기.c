
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
	int main()
	{
		int a = 0;
		scanf("%d", &a);
		for (int t = 0; t < 7; t++)
		{
			if (a == 10)
				return 0;
			for (int i = 0; i < 10; i++)
			{
				if (i == 0)
					i += 1;
				printf("%d x %d = %d\n", a, i, a * i);
				
			}
			a++;
			
		}

	}

