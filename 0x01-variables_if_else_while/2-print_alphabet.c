#include <stdio.h>
/**
 * main - lowercase alphabets
 * Return: 0 (Success)
 */
int main (void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int x;
for (x = 0; x < 26; x++);
{
putchar(alph[x]);
}
putchar("\n");
return (0);
}
