#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, prints only a newline.
 * Otherwise, prints a right-aligned triangle using '#' characters.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			/* Print spaces before the '#' characters */
			for (j = 0; j < size - i; j++)
				_putchar(' ');

			/* Print '#' characters */
			for (j = 0; j < i; j++)
				_putchar('#');

			/* End the line */
			_putchar('\n');
		}
	}
}
