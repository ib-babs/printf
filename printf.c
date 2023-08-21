#include "main.h"
/**
 * _printf - Customized printf function
 * @format: Format of the printf
 * Return: Length of the argument
 */
int _printf(const char *format, ...)
{
	convert_fmt get_format[] =
	{
		{'c', printf_char},
		{'s', printf_str},
		{'%', printf_37}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);

	while (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i = i + 1;
			j = 2;
			while (j >= 0)
			{
				if (get_format[j].fmt == format[i])
					len += get_format[j].f(args);
				j--;
			}
		}
		else
			_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
