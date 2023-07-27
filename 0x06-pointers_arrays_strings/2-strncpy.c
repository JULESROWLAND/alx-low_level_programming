#include "main.h"
#include <string.h>

/**
 * *_strncpy - This copys string from one string to the next
 * @dest: string
 * @src: string
 * @n: interger
 * Return: str
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
