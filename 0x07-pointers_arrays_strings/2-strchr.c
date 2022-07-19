#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: pointer
 *@c: character
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
