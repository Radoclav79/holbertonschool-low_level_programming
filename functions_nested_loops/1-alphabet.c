#include "main.h"
/**
 * print_alahabet - print lowercase alphabet
 *
 * Return: always 0 success
 */
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
