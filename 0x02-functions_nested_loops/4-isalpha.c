#include "main.h"
/**
 * _isalpha - alphabets with _putchar
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}

