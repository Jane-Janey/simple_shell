#include "shell.h"

/**
 * shell_env -prints environment variables
 * Return: void
 */

int shell_env(void)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		_puts(environ[i]);
		_putchar('\n');
	}

	return (0);
}
