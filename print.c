#include "holberton.h"
/**
 * get_func - returns needed function
 * @i: identifier for function
 * Return: Pointer to needed function
 */
char* (*get_func(char i))(va_list)
{
	int k = 0;

	print keys[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_d},
		{'\0', NULL}
	};

	while (keys[k].id != '\0')
	{
		if (keys[k].id == i)
			return (keys[k].func);
		k++;
	}
	return (NULL);
}
/**
 * _printf - mini printf version
 * @format: initial string with all identifiers
 * Return: strings with identifiers expanded
 */
int _printf(const char *format, ...)
{
	int len = 0, i = 0;
	va_list list;
	char *buffer, *str;
	char* (*f)(va_list);

	if (format == NULL) /* validate input */
		return (0);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);
	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%') /* copy format into buffer until '%' */
			buffer[len++] = format[i++];
		else /* if %, find and run function, assign to buffer */
		{
			if (format[++i] == '%')
				buffer[len++] = format[i++];
			else
			{
				f = get_func(format[i]);
				if (f == NULL)
					buffer[len++] = format[--i];
				else
				{
					str = f(list);
					while (*str != '\0')
						buffer[len++] = *str++;
				} i++;
			}
		}
	}
	buffer = realloc(buffer, _strlen(buffer)); /* realloc to correct size */
	write(1, buffer, _strlen(buffer)); /* print */

	va_end(list);
	return (_strlen(buffer));
}
