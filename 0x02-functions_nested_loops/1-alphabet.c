#include <stdio.h>
/**
 * main - lowercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
char alp[] = "a";
int x;
while (alp[x] <= 'z')
{
_putchar(alp[x]);
x++;
}
putchar('\n');
return (0);
}
