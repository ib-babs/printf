#include "main.h"
/**
 * printf_str - String
 * @val: va_list
 * Return: Function of the string
 */
int printf_str(va_list val)
{
	char *s;
	int len = 0;

	s = va_arg(val, char *);

	if (s == NULL)
		s = "(null)";
	len += _puts(s);
	return (len);
}
/**
 * printf_char - Print character
 * @val: val_list
 * Return: The length of the char
 */
int printf_char (va_list val)
{
	char c = va_arg(val, int);

	_putchar(c);
	return (1);
}
