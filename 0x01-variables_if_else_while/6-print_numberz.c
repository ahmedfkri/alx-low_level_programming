#include <stdio.h>

/**
 * main - entry point
 *
 * Description: single digits of base 10
 *
 * Return: 0 succss
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar("%i", i);
	}
	putchar("\n");

	return (0);
}
