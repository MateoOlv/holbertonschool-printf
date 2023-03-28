#include "main.h"

int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	//success
	return(1);
}
int print_s(va_list args)
{
	int s;
	char *string = va_arg(args, char *);
	if (string == NULL)
	{
		//empty string
		return (0);
	}
	for (s = 0; string[s]; s++)
	{
		_putchar(string[s])
	}
	//success
	return (s);
}
int print_mod(va_list args)
{
	//no used
	(void) args;
	_purchar('%');
	//success
	return (1);
}
