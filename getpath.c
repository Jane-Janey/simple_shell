#include "shell.h"

/**
 * get_path -return value of path enviroment variable
 * Return: pointer to the value of $PATH
 */

char *get_path(void)
{
	return (_getenv("PATH"));
}
