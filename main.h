#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

typedef struct format
{
	char *form;
	void (*f)(va_list args);
} ft;
int _printf(const char *format, ...);
void print_c(va_list args);
void print_s(va_list args);
void print_mod(va_list args);

#endif
