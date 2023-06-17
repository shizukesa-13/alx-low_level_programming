#include <stdio.h>
/**
 * main - lowercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
char num[16] = "0123456789abcdef";
int x;
for (x = 0; x < 16; x++)
{
putchar(num[x]);
}
putchar('\n');
return (0);
}
