#include "main.h"
/**
 * largest_number - prints the largest of three integers
 * @x: character 1
 * @y: character 2
 * @z: character 3
 * Return: largest number
 */
int largest_number(int a; int b; int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b
}
else
{
largest = c;
}
return (largest);
}
