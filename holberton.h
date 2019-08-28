#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
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
char **splits(char *line, char *delim);
int execute(char **parse, char **environ);
void _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
char **find_path(char **environ);
char *_getenv(char **environ, char *dirname);
char *args_path(char **parse, char **tokens);
char *_strdup(char *str);
char *if_exists(char **environ);
/*extern char **environ;*/
char *_strcat(char *dest, char *src);
int _strcmp(char *, char *);
int _help(void);
int my_exit(void);
int my_env(char **environ);
int _cd(void);
void number_line(int line_n);
#endif
