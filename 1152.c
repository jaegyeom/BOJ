#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char str[1000000];

	gets(str);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}
	count++;

	if (str[0] == ' ' && str[strlen(str) - 1] == ' ')
	{
		count -= 2;
	}
	else if (str[0] == ' ' || str[strlen(str) - 1] == ' ')
	{
		count -= 1;
	}

	printf("%d", count);
	return 0;
}
