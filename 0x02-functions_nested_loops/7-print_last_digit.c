#include "main.h"

/**
 *print_last_digit- -- prints the last digit of a number.
 *@x: Argument to be passed
 *Return: last digit of a number
 */

int print_last_digit(int x)
{
int last;

last = x % 10;
if (x < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}

