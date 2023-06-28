#include "shell.h"

/**
 * _strcpy -Copies a string
 * @dest:destination
 * @src:source
 * Return: Pointer to a destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/**
 * _strcat - joins or adds two strings
 * @dest:destination
 * @src:source
 * Return:pointer to destination buffer
 */
char *_strcat(char *dest, const char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
/**
 * _strdup -Duplicates a string
 * @str:string to duplicate
 * Return:pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
/**
 *_putchar -Writes character c to stdout
 * @c:character to print
 * Return:on success 1
 * On error, -1 is returned and an errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strspn - Gets the length of a prefix substring
 * @s:pointer to string input
 * @accept:substring prefix to look for
 * Return:number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			return (i);
	}

	return (i);
}
