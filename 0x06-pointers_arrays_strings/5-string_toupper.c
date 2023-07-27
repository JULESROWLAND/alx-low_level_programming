#include "main.h"
/**
 * *string_toupper - This converts string from lowercase to uppercase
 * @arr: This takes a string data
 * Return: a character
 */
char *string_toupper(char *arr)
{
	int i;

	for (i = 0; arr[i] != '\n'; i++)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
		{
		arr[i] = arr[i] - 32;
		}
	}
	return (arr);
}
