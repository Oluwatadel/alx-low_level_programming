#include "main.h"
/**
 * jack_bauer - Prints every min of the day
 *
 *jack_bauer - to compute all the minutes of the day
 * hours and minutes would be printed
 *
 *
 * Jack Bauer, starting from 00:00 to 23:59
 */
jack_bauer(int hour, int minute)


	for (hour = 0; hour <= 23; hour++;)
	{
		for (minute = 0; minute <= 59; minute++;)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
}
