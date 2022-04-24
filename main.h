#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

typedef struct print
{
	char *parameter;
	int _printf(const char *format, ...);
