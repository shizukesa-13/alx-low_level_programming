#include <stdio.h>
/**
 * main - program that prints _putchar
 * Return: 0 (Success)
 */
int main(void)
{
char fct[] = "_putchar";
int x = 0;
while (fct[x] != '\0')
{
putchar(fct[x]);
x++;
}
putchar('\n');
return (0);
}
