#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int charPrinter(char c);
int _printf(const char *format, ...);
int str_handler(char *str);
int int_handler(int n);

#endif
