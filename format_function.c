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

int print_i(va_list args)
{
	int i, i2, n, n2, b1 = 0;
	n = va_arg(args, int);

	if (n == 0)
	{
		write(1, n, 1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	n2 = n;
	while (n2 > 0)
	{
		b1++;
		n2 /= 10;
	}
	if (b1 == 0)
	{
		return(0);
	}
	i = b1 - 1;
	for (; i >= 0; i--)
	{
		for (i2 = 0; i2 < i; i2++)
		{
		}
	}
}
