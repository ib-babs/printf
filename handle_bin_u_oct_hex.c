#include "main.h"
/**
 * handle_bin_oct_un_int - Handle these conversions
 * @number: Integer number
 * @divider: Divisor
 * @length: Length of the number
 * Return: Pointer to string
 */
char *handle_bin_oct_un_int(unsigned int number, int divider, int length)
{
	unsigned int rem;
	int i = 0;
	char *s = malloc(sizeof(char) * length);

	if (number == 0)
		_putchar('0');
	if (s != NULL)
	{
		while (i < length)
		{
			rem = number % divider;
			number = number / divider;
			s[length - (i + 1)] = rem + '0';
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}

/**
 * handle_hex_HEX - Handle these conversions
 * @number: Integer number
 * @hex_value: COnversion of alphabet
 * @length: Length of the number
 * Return: Pointer to string
 */
char *handle_hex_HEX(unsigned int number, int hex_value, int length)
{
	unsigned int rem;
	int i = 0;
	char *s = malloc(sizeof(char) * length);

	if (number == 0)
		_putchar('0');
	if (s != NULL)
	{
		while (i < length)
		{
			rem = number % 16;
			if (rem > 9 && rem <= 15)
				s[length - (i + 1)] = hex_value + rem;
			else
				s[length - (i + 1)] = rem + '0';
			number = number / 16;
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}

