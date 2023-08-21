#include "main.h"
/**
 * printf_str - FUnction that prints string
 * @val: Function argument
 * Return: Void
 */
void printf_str(va_list val)
{
	char *s;
	int i = 0;
	
	s = va_arg(val, char *);

	if (s != NULL)
		while (s[i])
			_putchar(s[i++]);
}
