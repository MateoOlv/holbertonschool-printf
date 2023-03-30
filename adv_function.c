#include "main.h"

int print_b(va_list args)
{
	unsigned int itb[32], n = 0, b1 = 0;
	int i;
	n = va_arg(args, unsigned int);
	if (n <= 1)
	{write(1, (n + '0'), 1); }
	else
	{
		for (i = 0; n > 0; i++;)
		{
			itb[i] = n % 2;
			n /= 2;
		}
		for (i = i - 1; i >= 0; i--)
		{write(1, (itb[i] + '0'), 1); 
		b1++; }
	}
	return (b1);
}

