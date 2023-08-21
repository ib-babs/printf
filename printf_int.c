#include "main.h"
/**
 * printf_num - Print numbers
 * @val: va_list
 * Return: Void
 */
int printf_num(va_list val)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(val, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9;)
		div *= 10;

	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
