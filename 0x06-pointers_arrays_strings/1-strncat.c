#include "main.h"
#include <string.h>

/**
 *  *_strncat - This concatenate a string but with conditions
 *  @dest: This is the destination string
 *  @src: This is the source string
 *  @n: This will hold the interger for the condition
 *  Return: this returns a char data
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
