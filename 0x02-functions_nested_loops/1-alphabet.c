#include "main.h"
/**
 * main - lowercase alphabets with void prit_alphabet _putchar
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
