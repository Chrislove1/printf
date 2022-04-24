@@ -25,6 +25,7 @@ int _printf(const char *format, ...)
	};
	va_list ap;
	int count = 0;


	va_start(ap, format);
	count = get_print(format, argument, ap);
