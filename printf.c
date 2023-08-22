#include "main.h"
/**
 * _printf - Function to print
 * @format: Conversion specifer
 * Return: Length of the string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	char *ptr;

	ptr = (char *)format;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			len += _putchar(*ptr);
			continue;
		}
		ptr++;
		len += get_func(ptr, args);
	}
	va_end(args);
	return (len);
}
