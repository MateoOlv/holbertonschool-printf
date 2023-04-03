#include "main.h"

/**
 * get_format - format
 *@args: args
 *@s: format
 *Return: return
 */
int get_format(va_list args, char s)
{
	unsigned int a = 0;

	ft formats[] = {
		{ "c", print_c },
		{ "s", print_s },
		{ "%", print_mod },
		{ "i", print_int },
		{ "d", print_int },
		{ NULL, NULL }
	};

	while (a < 5)
	{
		if (*formats[a].form == s)
		{
			return (formats[a].f(args));
		}
		a++;
	}
	write(1, "%", 1);
	write(1, &s, 1);
	return (2);
}
/**
 *_printf - printf clone
 *@format: format
 *Return: return
 *
 */
int _printf(const char *format, ...)
{
	int i = 0, b1 = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
			{return (-1); }
			b1 += get_format(args, format[i + 1]);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			b1++;
		}
		i++;
	}
	va_end(args);
	return (b1);
}
