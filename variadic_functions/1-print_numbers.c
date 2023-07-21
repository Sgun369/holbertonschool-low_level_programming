#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - a function that prints numbers.
*@separator: string to print between numbers.
*@n: parametere number.
*
*Return:void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;


	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

	if ((separator == NULL) || (!i))
		printf("%d", x);
	else

	printf("%s%d", separator, x);
	}
	printf("\n");
	va_end(args);
}
