#include "shell.h"

/**
 * main - entry point
 * Return: 0 on success
 */

int main(void)
{
	char *input = NULL;
	char *ar[MAX_ARG_SIZE];
	size_t n = 0;
	int characters_read;

	while (1)
	{
		printf("$ ");
		characters_read = getline(&input, &n, stdin);
		if (characters_read == -1)
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
		remove_newline(input);

		if (strcmpp(input, "exit") == 0)
		{
			break;
		}

		tokenize(input, ar);

		if (characters_read == -1)
			break;

		command_exec(input, ar);
	}
	free(input);
	return (0);
}
