#include <stdio.h>
/**
 * main - lower+uppercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int x;
for (x = 0; x < 52; x++)
{
putchar(alph[x]);
}
putchar('\n');
return (0);
}
