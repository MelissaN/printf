#include "holberton.h"

int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0;
	va_list list;
	char *buffer;

	print keys[] = {
		{'c', print_c},
		{'s', print_s},
       	/*	{'d', print_d},
	      	{'i', print_i}, */
		{'\0', NULL}
	};
	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	if (format == NULL) /* validate input */
		return (-2);
       	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%') /* copy format into buffer until '%' */
		{
			buffer[j++] = format[i++];
		}
		else /* if %, find and run function, assign to buffer */
		{
			i++;
			while (keys[k].id != '\0')
			{
				if (keys[k].id == format[i])
					keys[k].func(list);
				k++;
			} i++;
		}
	}
	buffer = realloc(buffer, _strlen(buffer)); /* realloc to correct size */
	write(1, buffer, _strlen(buffer)); /* print */

	va_end(list);
	return (_strlen(buffer));
}
