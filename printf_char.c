#include "main.h"

/**
 * printf_char - function to print character
 * @val: va_list
 * Return: 0
 */
void printf_char(va_list val)
{
	char chr = va_arg(val, int);

	_putchar(chr);
}
