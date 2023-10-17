#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024
#define MAX_ARG_SIZE 128

int strlenn(const char *);
void printff(const char *);
void remove_newline(char *);
void tokenize(char *, char *[]);
int strcmpp(const char *, const char *);
void command_exec(char *, char *[]);
char *_strcpy(char *, char *);
char *_strcat(char *, char *);
#endif
