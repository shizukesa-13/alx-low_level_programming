#include "main.h"
/*
 * _isupper - function that checks for uppercase character specificly the letter c
 * @c: character
 * Return: 1 id c is uppercase else 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
