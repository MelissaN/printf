#include "holberton.h"

int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0;
	char *buffer;
	va_list list;

	print keyss[] = {
		{'c', print_c},
		{'s', print_s},
       	/*	{'d', print_d},
	      	{'i', print_i}, */
		{'\0', NULL}
	};

	if (format == NULL) /* validate input */
		return (-1);
	else
	{
		va_start(list, format);
		buffer = malloc(10); /* malloc general size */
		if (buffer == NULL) /* return if error */
			return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] != '%') /* copy format into buffer until '%' */
		{
			buffer[j++] = format[i++];
		}
		else /* if %, find and run function, assign to buffer */
		{
			i++;
			while (keyss[k].id != '\0')
			{
				if (keyss[k].id == format[i])
					keyss[k].func(list);
				k++;
			} i++;
		}
	}
	buffer = realloc(buffer, strlen(buffer)); /* realloc to correct size */
	write(1, buffer, strlen(buffer)); /* print */

	va_end(list);
	return (strlen(buffer));
}
