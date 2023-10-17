#include "shell.h"

/**
 * strlenn - function to determine length of string
 * @str: input string
 * Return: length of string
 */

int strlenn(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * remove_newline - removes newline brought by getline
 * @str: input string
 */

void remove_newline(char *str)
{
	int i;

	i = strlenn(str);
	if (i > 0 && str[i - 1] == '\n')
		str[i - 1] = '\0';
}

/**
 * strcmpp - compares two strings
 * @s1: input string
 * @s2: input string
 * Return: 0 if equal
 */

int strcmpp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s2[i] != '\0')
		return (-1);
	return (0);
}

/**
 * _strcpy - function to copy string
 * @dest: input string
 * @src: input string
 * Return: pointer to string
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (s);
}

/**
 * _strcat - function to concatenate two string
 * @dest: input string
 * @src: input string
 * Return: pointer to new string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *s = dest;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (s);
}
