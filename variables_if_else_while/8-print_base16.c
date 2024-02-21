#include <stdio.h>
/**
 * main - print hexadecimal number to lowercase
 *
 * Return: always 0 success
 */
int main(void)
{
	int i;
	char j;

	for ( i = 0 ; i <= 10 ; i++)
		putchar('0' + i);
	for ( j = 'a' ; j < 'g' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
