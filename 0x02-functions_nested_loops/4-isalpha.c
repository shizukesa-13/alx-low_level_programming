#include "main.h"
/**
 * _isalpha - alphabets with _putchar
 * @c: the character to be checked
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
