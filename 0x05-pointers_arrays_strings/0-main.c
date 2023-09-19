#include "main.h"
#include <stdio.h>

/**
 * main- starting point of the code
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_t0_98(&n);
	printf("n=%d\n", n);
	return (0);
}
