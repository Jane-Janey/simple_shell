#include "shell.h"

/**
 * _strlen -returns the length of a string
 *@s:string whose length to check
 * Return: Integer length of string
 */
i
int _strlen(const char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}
/**
 * _strcmp - compare two strings
 * @s1:first string to compare
 * @s2:second string to compare
 * Return:0 if @s1 and @s2 are equal
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int) (*s1) - (*s2));
}
/**
 * _strncmp -compare two strings up to a certain length
 * @s1:first string to compare
 * @s2:second string to compare
 * @n:max number of characters to compare
 * Return:0 if the strings are equal up to n characters
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char c1, c2;

	while (n-- > 0)
	{
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;

		if (c1 != c2)
			return (c1 - c2);
		if (c1 == '\0')
			break;
	}

	return (0);
}
/**
 * _strstr -checks if needle starts with haystack
 * @haystack:string to search
 * @needle:substring to find
 * Return:address of next char or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			int j;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
/**
 * _strchr -locates a character in a string
 * @s:pointer to our string array input
 * @c:character to locate from input array
 * Return:first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
