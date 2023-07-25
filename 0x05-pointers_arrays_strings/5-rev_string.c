#include "main.h"
#include <string.h>

/**
 * rev_string - Reverse string
 * @str: string variable
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
	char temp = s[start];

	s[start] = s[end];
	s[end] = temp;

	start++;
	end--;
	}
}

