#include <stdio.h>
/**
 * main - f print 1 to 100
 *
 * Return: 1 to 100, "fizz"if  3,"buzz" if 5 and "FizzBuzz" it is 3 and 5
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 100 ; i++)
	{
		if ((i + 1) % 3 == 0 && ((i + 1) % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i + 1) % 3 == 0)
		{
			printf("Fizz");
		}
		else if ((i + 1) % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i + 1);
		}
		if (i < 99)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
