#include "main.h"
/**
 * jack_bauer - prints 24h of a day
 *
 *
 *
 *  Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);

			_putchar(':');

			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');

		}
	}

}
