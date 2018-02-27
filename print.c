#include "holberton.h"
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

	if (format == NULL)
		return (-1);

	buffer = create_buffer();
	if (buffer == NULL)
		return (-1);

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
						if (str == NULL)
						{
							return (-1);
						}
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
						if (str == NULL)
							return (-1);
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
