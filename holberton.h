#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
/**
 * struct builtin - struct for built in commands
 *
 * @s: string
 * @f: pointer to function
 */
typedef struct builtin
{
	char *s;
	int (*f)(void);
} builtin_t;
char *read_line(void);
char **splits(char *line);
int execute(char **parse, int line_n);
void _puts(char *str);
int _putchar (char c);
char *_strcat(char *dest, char *src);
int _strcmp(char *, char *);
int _help(void);
int my_exit(void);
int my_env(void);
int _cd(void);
void number_line(int line_n);
#endif
