#include <stdio.h>

void first(void)_attribute_((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("you're the best! and yet, you must allow.\n");
	printf("i bore my house upon my back!\n");
}
