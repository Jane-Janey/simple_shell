#include "shell.h"

/**
 * free_error - Free allocated pointers following system error
 * @argv: Pointer to a pointer to an array of pointers
 * @arg:  Pointer to a pointer to an array of characters
 * Return : void
 */
void free_error(char **argv, char *arg)
{
	int i;

	for (i = 0; argv[i]; i++)
		free(argv[i]);
	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}
/**
 * free_tokens -Free memory allocated by tokenize()
 * @ptr: Pointer to allocated memory
 * Return: void
 */
void free_tokens(char **ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
		free((ptr[i]));
	free(ptr);
}
/**
 * free_path - Free global variable containing the PATH environment variable value
 * Return: nothing
 */

void free_path(void)
{
	if (environ != NULL)
	{
		size_t i = 0;

		while (environ[i] != NULL)
		{
			if (_strncmp(environ[i], "PATH=", 5) == 0)
			{
				free(environ[i]);
				environ[i] = NULL;
				break;
			}
			i++;
		}
	}
}
