#include "main.h"
/**
 *print_c - print char
 *@args: args
 *Return: 1
 */
int print_c(va_list args)
{
	char a = va_arg(args, int);

	write(1, &a, 1);
	/*success*/
	return (1);
}
/**
 *print_s - print string
 *@args: args
 *Return: s
 */
int print_s(va_list args)
{
	int s;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		string = "(nil)";
	}
	for (s = 0; string[s]; s++)
	{
		write(1, &string[s], 1);
	}
	/*success*/
	return (s);
}
/**
 *print_mod - print %
 *@args: args
 *Return: return
 */
int print_mod(va_list args)
{
	(void) args;
	write(1, "%", 1);
	return (1);
}
