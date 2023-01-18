#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * the function will print the numbers
 * from 0 to except 2 and 4
 *
 * Return: void function no return value
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
