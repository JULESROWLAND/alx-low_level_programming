#include "main.h"
#include <string.h>

/**
 * *_strcat - This concatenates two strings
 * @dest: string data
 * @src: string data
 * Return: a char value
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
