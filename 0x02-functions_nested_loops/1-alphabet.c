#include "main.h"
/**
 * print_alphabet - lowercase alphabets with _putchar
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
