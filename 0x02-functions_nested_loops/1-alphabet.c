#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return 0 - if code executes successfully
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}
