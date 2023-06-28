#include "shell.h"

/**
 * shell_clear - clear command
 * @args: an array of arguments
 * Return: 1 to continue executing or 0 to exit
*/ 

int shell_clear(char **args)
{
	(void)args; 
	_puts("\033[2J\033[H");
	return (1);
}
