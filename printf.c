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
 * @format: character strings
 *
 * Author - Nedu Robert
 * Return: Returns the number of characters printed
 * (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	specifier_t specifiers[] = {
		{"%c", specifier_char},
		{"%s", specifier_string},
		{"%%", specifier_percent},
		{"%d", specifier_int},
		{"%i", specifier_int},
		{"%u", specifier_unsigned_int}
	};
	va_list list;
	int length = 0, i = 0, j = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (j < 4)
			{
				if (specifiers[j].specifier[0] == format[i] &&
				specifiers[j].specifier[1] == format[i + 1])
				{
					length += specifiers[j].f(list);
					i += 2;
					break;
				}
				j++;
			}
		}

		_putchar(format[i]);
		length++;
		i++;
	}

	va_end(list);
	return (length);
}
