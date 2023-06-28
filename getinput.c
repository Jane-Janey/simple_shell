#include "shell.h"

static char *last_input;
/**
 * get_input - read input from user
 * Return: pointer to a buffer containing user's input
*/
char *get_input(void)
{
	char *input = NULL;
	size_t input_size = 0;
	ssize_t nread;

	do {
		prompt();

		nread = getline(&input, &input_size, stdin);

		if (nread == -1)
		{
			free(input);
			_puts("\n");
			return (NULL);
		}

		input[nread - 1] = '\0';

	} while (input[0] == '\0' || isspace(input[0]));
	last_input = input;
	return (input);
}
/**
 * free_last_input-frees the most recent input entered by the user
 * Frees the memory allocated for the most recent input
 */
void free_last_input(void)
{
	free(last_input);
	last_input = NULL;
}
