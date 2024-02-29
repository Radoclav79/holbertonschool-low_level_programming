#include "main.h"
#include <stdio.h>
/**
 * _strlen - string length
 * @s: parameter
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int len;

	s = "My first sltrlen!";
	len = _strlen(s);
	printf("%d\n", len);
	return (0);
}
