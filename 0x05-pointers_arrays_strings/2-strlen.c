#include "main.h"
#include <stddef.h>

/**
 * _strlen- Returns the string length
 * @str: string to get the length of
 * Return: Length f string
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
