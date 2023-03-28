#include "main.h"
int get_format(va_list args, char s)
{
	unsigned int a = 0;

	ft formats[] = {
		{ "c", print_c },
		{ "s", print_s },
		{ "%", print_mod },
		{ NULL, NULL }
	};

	while (a < 3)
	{
		if (*formats[a].form == s)
		{
			return (formats[a].f(args));
		}
		a++;
	}
	return (1);
}

int _printf(const char *format, ...)
{
	int i, b1;
	va_list args;
	
	va_start(args, format);
	if (format != NULL)
	{
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				b1 += get_format(args, format[i + 1]);
				i++;
			}
			else
			{
				write(1, &format[i], 1);
				b1++;
			}
		}
	}
	va_end(args);
	return(b1);
}
