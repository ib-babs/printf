#include "main.h"
/**
 * printf_str - FUnction that prints string
 * @val: Function argument
 * Return: Length of the string
 */
int printf_str(va_list val)
{
	char *s;
	int i;

	s = va_arg(val, char *);

	i = 0;
	while (s[i])
		_putchar(s[i++]);
	return (i - 1);
}
