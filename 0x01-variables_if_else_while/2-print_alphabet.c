#include <stdio.h>

/**
 *main - Entry point
 *Description - 'prints the alphabet in lowercase'
 *Result: Always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
