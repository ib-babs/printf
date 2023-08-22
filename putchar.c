#include "main.h"
/**
 * _putchar - Fuction to write to stdout
 * @chr: Character
 * Return: 1 character
 */
int _putchar(char chr)
{
	return (write(1, &chr, 1));
}

/**
 * _puts - Fuction to write to stdout
 * @s: String
 * Return: Length of the string
 */
int _puts(char *s)
{
	char *news = s;

	while (*s)
		_putchar(*s++);
	return (s - news);
}
