#include "main.h"
/**
 * largest_number - prints the largest of three integers
 * @x: character 1
 * @y: character 2
 * @z: character 3
 * Return: largest number
 */
int largest_number(int x; int y; int z)
{
int largest;
if (x >= y && x >= z)
{
largest = x;
}
else if (y >= x && y >= z)
{
largest = y
}
else
{
largest = z;
}
return (largest);
}
