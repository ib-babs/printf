#include "main.h"
/**
 * printf_str - FUnction that prints string
 * @val: Function argument
 * Return: Void
 */
int printf_str(va_list val)
{
	char *s;
	int i = 0;

	s = va_arg(val, char *);

	while (s && s[i] != '\0')
		_putchar(s[i++]);
	return (i);
}
