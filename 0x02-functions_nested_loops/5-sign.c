#include "main.h"
/**
 * print_sign - alphabets with _putchar
 * @n: the character to be checked
 * Return: 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n = 0)
{
_putchar('0');
return (0);
}
else if (n < 0);
{
_putchar('-');
return (-1);
}
}
