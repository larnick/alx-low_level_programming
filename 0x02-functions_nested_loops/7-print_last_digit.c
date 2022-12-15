#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;
		if (n < 0)
		{
			_putchar(-1 + 48);
			return (-1);
		}
		else
		{
			_putchar(1 + 48);
			return (1);
		}
}
