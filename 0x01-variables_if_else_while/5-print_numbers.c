#include <stdio.h>
/**
 * main - 10 digits
 * Return: 0 (Success)
 */
int main(void)
{
char dig[10] = "0123456789";
int x;
for (x = 0; x < 10; x++)
{
putchar(dig[x]);
}
putchar('\n');
return (0);
}
