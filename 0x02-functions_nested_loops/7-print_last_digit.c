#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: the character to be checked
 * Return: y value
 */
int print_last_digit(int x)
{
int y;
y = x % 10;
if (y < 0)
y = -y;
_putchar(y + '0');
return (y);
}
