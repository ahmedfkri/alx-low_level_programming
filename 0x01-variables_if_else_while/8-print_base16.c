#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print hexa
 *
 * Return: 0 success
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 570)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
