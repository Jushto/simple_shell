#include "shell.h"

/**
 * printff - function to print string
 * @str: input string
 */

void printff(const char *str)
{
	write(STDOUT_FILENO, str, strlenn(str));
}

