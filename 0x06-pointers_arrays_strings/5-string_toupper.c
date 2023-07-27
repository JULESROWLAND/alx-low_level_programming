#include "main.h"
/**
 * *string_toupper - This converts string from lowercase to uppercase
 * @arr: This takes a string data
 * Return: a character
 */
char *string_toupper(char *arr)
{
	int i;

	i =0;
	while (arr[i] != '\n')
	{
		if (arr[i] >= 97 && arr[i] <= 122)
			arr[i] = arr[i] - 32;
		
		i++;
	}
	return (arr);
}
