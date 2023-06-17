#include <stdio.h>
/**
 * main - lowercase alphabets except q and e
 * Return: 0 (Success)
 */
int main(void)
{
char alph[24] = "abcdfghijklmnoprstuvwxyz";
int x;
for (x = 0; x < 24; x++);
{
putchar(alph[x]);
}
putchar('\n');
return (0);
}
