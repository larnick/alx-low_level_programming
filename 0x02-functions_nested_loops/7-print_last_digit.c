#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int pld)
{
	int pld;
		pld = (pld % 10);
		if (pld < 0)
		{
			pld = (-1 * pld);
		}
		_putchar(pld + '0');
		return (pld);
}
