#include "main.h"

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/* Example usage */
int main(void)
{
	int result = mul(4, 5);
	printf("Result: %d\n", result);
	return 0;
}
