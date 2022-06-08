#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: a character that is checked
 * Return: returns 0 0r 1 
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
