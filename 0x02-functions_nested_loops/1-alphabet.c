#include <stdio.h>
/**
 * main - lowercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
char alph[] = "abcdefghijklmnopqrstuvwxyz";
int x;
while (alph[x] != '\0')
{
putchar(alph[x]);
x++;
}
{
putchar(alph[x]);
}
putchar('\n');
return (0);
}
