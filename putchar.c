#include "main.h"

/**
 * _putchar - function to displau character
 * @chr: the character to take
 * Return: equivalent character
 */

int _putchar(char chr)
{
	return (write(1, &chr, 1));
}
