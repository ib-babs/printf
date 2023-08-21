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
			if (format[i] == 'c')
				printf_char(args);
			if (format[i] == 's')
				printf_str(args);
			if (format[i] == '%')
				printf_37();
			if (format[i] == 'i' || format[i] == 'd')
				printf_num(args);
			if (format[i] == 'b')
				printf_bin(args);
			if (format[i] == 'u')
				printf_unsigned_int(args);
			if (format[i] == 'x')
				printf_hex(args);
			if (format[i] == 'X')
				printf_HEX(args);
			if (format[i] == 'o')
				printf_oct(args);
		}
		else
			_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
