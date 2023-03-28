#include "main.h"

int print_c(va_list args)
{
	char a = va_arg(args, int);
	write(1, &a, 1);
	/*success*/
	return(1);
}
int print_s(va_list args)
{
	int s;
	char *string = va_arg(args, char *);
	if (string == NULL)
	{
		/*empty string*/
		return (0);
	}
	for (s = 0; string[s]; s++)
	{
		write(1, &string[s], 1);
	}
	/*success*/
	return (s);
}
int print_mod(va_list args)
{
	/*no used*/
	(void) args;
	write(1, "%", 1);
	/*success*/
	return (1);
}
