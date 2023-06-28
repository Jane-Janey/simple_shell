#include "shell.h"

/**
 * prompt - prints shell prompt to standard input stream
 * Return: void.
 */
void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
