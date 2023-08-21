#include "main.h"
/**
 * _printf - Customized printf function
 * @format: Format of the printf
 * Return: Length of the argument
 */
int _printf(const char *format, ...)
{
	conver_fmt fmt[] = {
		{"%c", printf_char},
		{"%s", printf_str},
		{"%%", printf_37}
	};

	va_list args;
	int i, j, len = 0;

	i = 0;
	va_start(args, format);
	while (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (fmt[j].id[0] == format[i] && fmt[j].id[1] == format[i + 1])
			{
				len += fmt[j].f(args);
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
