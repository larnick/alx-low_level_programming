#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the numbers from 1 to 100
* 3 multiples print Fizz instead of the number
* 5 multiples print Buzz instead of the number
* 3 & 5 multiples print FizzBuzz instead of the number
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
		i = 1;
		printf("%d", i);
		for (i = 2; i <= 100; i++)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
				printf(" FizzBuzz ");
			else if (i % 3 == 0)
				printf(" Fizz ");
			else if (i % 5 == 0)
				printf(" Buzz ");
			else
				printf(" %d", i);
		}
		printf("\n");
	return (0);
}

Footer

© 2022 GitHub, Inc.

Footer navigation


