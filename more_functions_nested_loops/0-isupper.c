#include "main.h"
/**
 * _isupper - prints 1 if is uppercase
 * @c: letter parametre
 *
 * Return: 0 if otherwise and 1 if is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
