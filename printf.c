#include "main.h"
/**
 * _printf - Customized printf function
 * @format: Format of the printf
 * Return: Length of the argument
 */
int _printf(const char *format, ...)
{
	convert_fmt get_fmt[] = {
		{"%c", printf_char},
		{"%s", printf_str},
		{"%%", printf_37},
		{"%d", printf_num},
		{"%i", printf_num},
		{"%b", printf_bin}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);

	while (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 5;
		while (j > 0)
		{
			if (get_fmt[j].fmt[0] == format[i] && get_fmt[j].fmt[1] == format[i + 1])
			{
				len += get_fmt[j].f(args);
				i = i + 2;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
