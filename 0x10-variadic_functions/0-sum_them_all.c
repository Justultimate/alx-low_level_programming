#include <stdarg.h>

/**
 * sum_them_all - sums up all parameters.
 * @n: Number to be summed.
 * @...: A variable number of parameters to calculate  the sum.
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
