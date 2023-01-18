#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string where we will search for the character
 * @c: the character to search for
 *
 * Return: retruns a pointer to first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i, length, occ;

	i = 0, length = 0, occ = -1;
	while (*(s + length) != '\0')
	{
		length++;
	}
	if (c == '\0')
		occ = length;
	else
	{
		do {
			if (s[i] == c)
			{
				occ = i;
				break;
			}
			i++;
		} while (*(s + i) != '\0');
	}
	if (occ >= 0)
		return (s + occ);
	else
		return ('\0');
}
