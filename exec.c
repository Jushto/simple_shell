#include "shell.h"

/**
 * tokenize - function to tokenize the input string
 * @str: input string
 * @ar: array of arguments
 */

void tokenize(char *str, char *ar[])
{
	int count = 0;
	char *token;

	token = strtok(str, " ");
	while (token != NULL)
	{
		ar[count++] = token;
		token = strtok(NULL, " ");
	}
	ar[count] = NULL;
}

/**
 * command_exec - forks and executes necessary commands
 * @str: input string
 * @ar: array of arguments
 */

void command_exec(char *str, char *ar[])
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Fork failed");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char full_path[256];
		if (str[0] == '/')
			execve(ar[0], ar, NULL);

		_strcpy(full_path, "/bin/");
		_strcat(full_path, ar[0]);

		execve(full_path, ar, NULL);

		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		int status;

		waitpid(pid, &status, 0);
	}
}
