#include <stdio.h>
/**
 * main -Entry point
 * Description - 'prints the lowercase of alphabets in revers'
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
