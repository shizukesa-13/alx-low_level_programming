#include <stdio.h>
/**
 * main - lowercase alphabets
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
return (0);
}
