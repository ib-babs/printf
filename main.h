#ifndef PRINTF_H
#define PRINTF_H
#define BUFFER_SIZE 1024
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct format - Format for printf function and its callee
 * @fmt: Format
 * @f: Function pointer
 */
typedef struct format
{
	char *fmt;
	int (*f)(va_list);
} convert_fmt;

int _putchar(char c);
int _isdigit(char c);
int digit_len(unsigned int digits, int divider);
int string_len(char *str);
int _puts(char *);
char *handle_bin_oct_un_int(unsigned int number, int divider, int length);
char *handle_hex_HEX(unsigned int number, int hex_value, int length);
int (*get_format(char *s))(va_list val);
int _printf(const char *format, ...);
int get_func(char *c, va_list val);
int printf_char(va_list val);
int printf_str(va_list val);
int printf_37(va_list val);
int printf_num(va_list val);
int printf_unsigned_int(va_list val);
int printf_bin(va_list val);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_oct(va_list val);
int printf_special_char(va_list val);
#endif /* PRINTF_H */
