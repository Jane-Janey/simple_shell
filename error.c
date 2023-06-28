#include "shell.h"

/**
 * _puts -print a string to stdout stream
 * @str:string to print
 * Return:Void
 */

void _puts(char *str)
{
	size_t len;
	ssize_t num_written;

	len = _strlen(str);
	num_written = write(STDOUT_FILENO, str, len);
	if (num_written == -1)
	{
		perror("write");
	}
}
/**
 * _puterror -Prints an error message to the std error
 * @err:error message to print
 * Return:void
 */
void _puterror(char *err)
{
	size_t len;
	ssize_t num_written;

	len = _strlen(err);
	num_written = write(STDERR_FILENO, err, len);
	if (num_written == -1)
	{
		perror("write");
	}
}
