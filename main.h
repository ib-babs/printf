#ifndef PRINTF_H
#define PRINTF_H
#define BUFFER_SIZE 1024
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct format - Format for printf function and its callee
 * @fmt: Format
 * @f: Function pointer
 */
typedef struct format
{
	char *fmt;
	int (*f)();
} convert_fmt;

int _putchar(char chr);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_str(va_list val);
int printf_37(void);
int printf_num(va_list val);
int printf_unsigned(va_list val);
int printf_bin(va_list val);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_oct(va_list val);
int printf_special_char(va_list val);
#endif /* PRINTF_H */
