#include "main.h"
/**
 * _printf - Customized printf function
 * @format: Format of the printf
 * Return: Length of the argument
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;

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
				case 'c':
					printf_char(args);
					break;
				case 's':
					printf_str(args);
					break;
				case '%':
					printf_37();
					break;
				case 'i':
				case 'd':
					printf_num(args);
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
