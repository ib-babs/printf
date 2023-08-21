#include "main.h"
/**
 * _printf - Customized printf function
 * @format: Format of the printf
 * Return: Length of the argument
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, len = 0;

	i = 0;

	va_start(args, format);
	while (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i = i + 1;
			switch (format[i])
			{
			case 's':
				printf_str(args);
				break;
			case 'c':
				printf_char(args);
				break;
			case '%':
				printf_37();
				break;
			default:
				break;
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
