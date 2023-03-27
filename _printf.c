#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	ft formats[] = {
		{ "c", print_c },
		{ "s", print_s },
		{ "%", print_mod},
		{ NULL, NULL }
	};
	va_start(args, format);

}
