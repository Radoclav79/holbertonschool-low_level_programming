#include "main.h"
/**
 * more_numbers - print 10 time 0 to 14
 *
 * Return: more numbers
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j < 10)
			{
				_putchar ('0' + j % 10);
			}
			else
			{
				_putchar ('0'+ j / 10 + j % 10);
			}
		}
		_putchar ('\n');
	}
}
