#include "main.h"
/**
 * _islower - check c is lower case
 * @c: (int) key
 *
 * Return: 1 if c is lowercase and 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
