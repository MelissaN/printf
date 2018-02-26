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
 * create_buffer - creates buffer to hold string until it's ready for print
 * Return: pointer to buffer created
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}
/**
 * write_buffer - prints buffer, then frees it and frees va_list
 * @buffer: buffer holding print-ables
 * @len: length of print-able string
 * @list: va_list
 */
void write_buffer(char *buffer, int len, va_list list)
{
	char *buff;

	buff = realloc(buffer, len); /* realloc to correct size */
	write(1, buff, len); /* print */

	free(buff); va_end(list);
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

	buffer = create_buffer();
	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%') /* copy format into buffer until '%' */
			buffer[len++] = format[i++];
		else /* if %, find and run function, assign to buffer */
		{
			i++;
			if (format[i] == '%')
				buffer[len++] = format[i];
			else
			{
				if (format[i] == ' ')
				{
					while (format[i] == ' ')
					i++;
					f = get_func(format[i]);
					if (f == NULL)
					{
						buffer[len++] = '%';
						buffer[len++] = ' ';
						buffer[len++] = format[i];
					}
					else
					{
						str = f(list);
						if (format[i] == 'd' || format[i] == 'i')
							buffer[len++] = ' ';
						while (*str != '\0')
							buffer[len++] = *str++;
					}
				}
				else
				{
					f = get_func(format[i]);
					if (f == NULL)
					{
						buffer[len++] = '%';
						buffer[len++] = format[i];
					}
					else
					{
						str = f(list);
						while (*str != '\0')
							buffer[len++] = *str++;
					}
				}
			} i++;
		}
	}
	write_buffer(buffer, len, list);
	return (len);
}
