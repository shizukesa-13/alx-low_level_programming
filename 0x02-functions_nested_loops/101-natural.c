#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
int x = 1;
int total = 0;
while (x < 1024)
{
if (x % 3 == 0)
total += x;
else if (x % 5 == 0)
total += x;
x++;
}
printf("%d\n", total);
return (0);
}
