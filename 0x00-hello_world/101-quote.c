#include <stdio.h>
#include <unistd.h>
/**
 * main - A C program that prints a line using the function char 
 * Retur: 1 (Error)
 */
int main(void)
{
char printing[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, printing, sizeof(printing) - 1);
return (1);
}
