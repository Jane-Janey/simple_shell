#include "shell.h"

/**
 * _atoi -converts a string to an integer
 * @str: string to convert
 * Return:integer value of the string
 */

int _atoi(const char *str)
{
	int i, sign;
	unsigned int num;

	i = 0;
	sign = 1;
	num = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		else if (str[i] >= '0' && str[i] <= '9')
			num = (num * 10) + (str[i] - '0');
		else
			break;
		i++;
	}
	return (num * sign);
}
/**
 **_memset -fills memory with a constant byte
 *@s:pointer to the memory area
 *@b:byte to fill *s with
 *@n:amount of bytes to be filled
 *Return:(s) a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _memcpy - Copies memory area
 * @dest: buffer to copy to
 * @src:what to copy
 * @n:n bytes of @src
 * Return:Always 0 on (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _realloc -Reallocates a block of memory
 * @ptr:pointer to previous malloc'ated block
 * @old_size:byte size of a previous block
 * @new_size:byte size of a new block
 * Return: pointer to
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb:size of the array
 * @size:size of each element
 * Return:pointer with new allocated memory or NULL if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
