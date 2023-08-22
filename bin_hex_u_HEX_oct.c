#include "main.h"
/**
 * printf_bin - Binary function
 * @val: va_list
 * Return: Length of the number
 */
int printf_bin(va_list val)
{
	unsigned int number = va_arg(val, unsigned int);
	int len = digit_len(number, 2);
	char *s = handle_bin_oct_un_int(number, 2, len);

	_puts(s);
	free(s);
	return (len);
}

/**
 * printf_HEX - Upper Hexadecimal function
 * @val: va_list
 * Return: Length of the number
 */
int printf_HEX(va_list val)
{
	unsigned int number = va_arg(val, unsigned int);
	int len = digit_len(number, 16);
	char *s = handle_hex_HEX(number, 55, len);

	_puts(s);
	free(s);
	return (len);
}


/**
 * printf_hex - Lower Hexadecimal function
 * @val: va_list
 * Return: Length of the number
 */
int printf_hex(va_list val)
{
	unsigned int number = va_arg(val, unsigned int);
	int len = digit_len(number, 16);
	char *s = handle_hex_HEX(number, 87, len);

	_puts(s);
	free(s);
	return (len);
}

/**
 * printf_unsigned_int - Unsigned int function
 * @val: va_list
 * Return: Length of the number
 */
int printf_unsigned_int(va_list val)
{
	unsigned int number = va_arg(val, unsigned int);
	int len = digit_len(number, 10);
	char *s = handle_bin_oct_un_int(number, 10, len);

	_puts(s);
	free(s);
	return (len);
}

/**
 * printf_oct - Print octal base numbers
 * @val: Number to print
 * Return: Length of the numbers
 */
int printf_oct(va_list val)
{
	unsigned int number = va_arg(val, unsigned int);
	int len = digit_len(number, 8);
	char *s = handle_bin_oct_un_int(number, 8, len);

	_puts(s);
	free(s);
	return (len);
}
