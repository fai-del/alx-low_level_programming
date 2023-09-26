#include "main.h"

/**
 * _strstr- function finds the first occurrence of the substring
 * @haystack: input
 * @needle: input
 * Return: 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
