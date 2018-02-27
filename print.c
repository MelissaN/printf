#include "holberton.h"
/**
 * _printf - mini printf version
 * @format: initial string with all identifiers
 * Return: strings with identifiers expanded
 */
int _printf(const char *format, ...)
{
	int len = 0, i = 0, j = 0;
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
		else /* if %, find function */
		{
			i++;
			if (format[i] == '\0') /* handle single ending % */
			{
				free(buffer);
				return(-1);
			}
			if (format[i] == '%') /* handle double %'s */
				buffer[len++] = format[i];
			else
			{
				f = get_func(format[i]); /* grab function */
				if (f == NULL)  /* handle fake id */
				{
					buffer[len++] = '%';
					buffer[len++] = format[i];
				}
				else /* return string, copy to buffer */
				{
					str = f(list);
					if (str == NULL)
					{
						free(buffer);
						return (-1);
					}
					if (format[i] == 'c' && str[0] == '\0')
						buffer[len++] = '\0';
					j = 0;
					while (str[j] != '\0')
					{
						buffer[len++] = str[j];
						j++;
					}
					free(str);
				}
			} i++;
		}
	}
	write_buffer(buffer, len, list);
	return (len);
}
