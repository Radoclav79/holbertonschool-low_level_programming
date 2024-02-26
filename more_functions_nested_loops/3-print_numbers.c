#include "main.h"
/**
 * print_numbers - print of 0 to 9
 *
 * Return: 0 is succes
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar ('0' + i);
		_putchar ('\n');
	}
}
