#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 * can only use _putchar three times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{

			num = count;
			if (count > 0)
			{
			putchar(48 + num / 10)
			}
			putchar(48 + num % 10);
			putchar('\n');
		}
	}
}
