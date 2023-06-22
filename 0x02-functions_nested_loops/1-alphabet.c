#include "main.h"
/**
 * main - lowercase alphabets
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char alp = "a";
while (alp <= 'z')
{
_putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
