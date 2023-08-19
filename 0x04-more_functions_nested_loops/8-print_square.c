#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of square
 *
 * Return: 0 (Success)
 */

void print_square(int size)
{
	int row, colum;

	for (row = 1; row <= size; row++)
	{
		for (colum = 1; colum <= size; colum++)
			_putchar('#');
		_putchar('\n');
	}
}
