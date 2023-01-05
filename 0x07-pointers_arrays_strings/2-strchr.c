#include "main.h"

/**
 * _strchr - return a pointer to the first occurence of a given char
 * in a given string or NULL if not found
 * @s: the given string
 * @c: the given character
 *
 * Return: pointer to c in s or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')/* terminate at the end of the string */
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
	{
		/* on condition we were looking for \0 */
		return (&s[i]);
	}
	else
	{
		/* it was not found */
		return (NULL);
	}
}
