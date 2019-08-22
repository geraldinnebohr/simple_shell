#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
char *read_line(void);
char **splits(char *line);
int execute(char **parse);
void _puts(char *str);
int _putchar (char c);
#endif
