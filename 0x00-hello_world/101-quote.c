#include <unistd.h>
/**
 * main - Wrinting with C program without printf or puts
 * Return: 1 (Error)
 */
int main(void)
{
char unix[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, unix, sizeof(unix) - 1);
return (1);
}
