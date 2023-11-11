#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _printf - I'm not going anywhere. You can print that wherever you want to.
 * I'm here and I'm a Spur for life
 * Function that produces output according to a format.
 * @format: list of types of arguments passed to the function
 *
 * Author - Nedu Robert
 * Return: Returns the number of characters printed
 * (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list list;
	int length = 0;
	int i = 0;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			length += _putchar(format[i]);
            i++;
		}
	}
	va_end(list);

	return (length);
}
