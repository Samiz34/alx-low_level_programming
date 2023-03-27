#include "main.h"
/**
 * puts_half - print the later half of the line
 *
 * str: the parameter
 * Return: Zero
 */

void puts_half(char *str)
{
	int i;
	int len = 0;
	
	for (i = 0 ;str[i] != '\0'; i++)
		len++;
	if (len % 2 = 0)
		i = len / 2;
		_putchar(str[i]);
	else (len % 2 !0)
		i = (len + 1) / 2;
		_putchar(str[i]);

}
