#include "main.h"
/**
 * print_square - print sqaure
 * @size: size of square
 *
 * Return: n * squre + n * line
 */
void print_square(int size)
{
	int i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (size <= 0 )
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
