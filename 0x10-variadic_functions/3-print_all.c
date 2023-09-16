#include "variadic_functions.h"
/**
 * print_all - This function prints or outputs anything
 *
 * @format: The types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int ball = 0;
	char *string;
	char *dfkm = "";

	va_list cheese;

	va_start(cheese, format);

	if (format)
	{
		while (format[ball])
		{
			switch (format[ball])
			{
				case 'c':
					printf("%s%c", dfkm, va_arg(cheese, int));
					break;
				case 'i':
					printf("%s%d", dfkm, va_arg(cheese, int));
					break;
				case 'f':
					printf("%s%f", dfkm, va_arg(cheese, double));
					break;
				case 's':
					string = va_arg(cheese, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", dfkm, string);
					break;
				default:
					ball++;
					continue;
			}
			dfkm = ", ";
			ball++;
		}
	}
	printf("\n");
	va_end(cheese);
}
