#include <stdio.h>
/**
 * main - program that prints _putchar
 * Return: 0 (Success)
 */
int main()
{
char fct[] = "_putchar";
int x = 0;
while (fct[x] ! = '\0')
{
_putchar(fct[x]);
x++;
}
_putchar('\n');
return (0);
}
