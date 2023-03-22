#include "main.h"

/*
 * _isalpha - checks is a letter, lowercase or uppercase
 *
 * Return: 1 for lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
