#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: number of time caracter
 *
 * Return: diagonal
 */
void print_diagonal(int n)
{
	int j, k;

	if (n > 0)
	{
		for (j = 0 ; j < n ; j++)
		{
			for (k = 0 ; k < j ; k++)
			{
				if (n != 0 || n != 1)
				{
					_putchar(' ');
				}
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
