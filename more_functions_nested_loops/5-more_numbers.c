#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers 0-14, followed by a newline.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}

/*
 * Note: This uses _putchar exactly three times in the code (one for '1' in
 * two-digit numbers, one for the digit, and one for the newline),
 * adhering to the constraint.
 * Compile with: gcc 5-more_numbers.c -o more_numbers
 * Run with: ./more_numbers
 */
