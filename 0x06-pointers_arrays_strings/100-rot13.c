#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char deta1[] = "ABCDEFGHIJKLMNOPQRSTVUWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWZTZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijkl";
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == deta1[j])
				{
					s[i] = datarot[j];
					break;
				}
			}
		}
	return (s);
}
