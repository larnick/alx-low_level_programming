#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int)
{
	int n;
		n = (n % 10);
		if (n < 0)
		{
			n = (-1 * n);
		}
		_putchar(n + '0');
		return (n);
}
