#include "main.h"

/**
 * specifier_char - Print a character
 * @list: input
 *
 * Return: Returns the length of the character.
 */
int specifier_char(va_list list)
{
	_putchar(va_arg(list, int));
    return (1);
}

/**
 * specifier_int- Print an integer
 * @list: input
 *
 * Return: Returns the length of the integer.
 */
int specifier_int(va_list list)
{
    int i = va_arg(list, int), j, length = 0, div = 1;

    if (i < 0)
	{
		j = i * -1;
		length += _putchar('-');
	} 
    else
	{
		j = i;
	}

	while (j / div > 9)
    {
		div *= 10;
    }

	while (div != 0)
	{
		length += _putchar('0' + j / div);
		j %= div;
		div /= 10;
	}

    return (length);
}
