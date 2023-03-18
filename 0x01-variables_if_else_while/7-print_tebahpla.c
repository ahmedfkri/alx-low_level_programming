#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphapet letters without q and c
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
