#ifndef _SHELL_H_
#define _SHELL_H_
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <stdarg.h>
#include <ctype.h>
/* Macros */
#define MAX_TOKENS 1024
#define BUFFER_SIZE 1024
#define PATH_MAX_LENGTH 4096
#define PATH_SEPARATOR ":"
#define PROMPT "$ "

/* execute.c */
int execute(char **args);
/* getenv.c */
char *_getenv(const char *name);
/* prompt.c */
void prompt(void);
/* getline.c*/
void *get_line(void);
/* built_in_funcs*/
int shell_unsetenv(char **args);
int shell_env(void);
int shell_clear(char **args);
int check_for_builtin(char **args);
int execute_buitlin(char *cmd, char **args);
void shell_help(void);
void shell_exit(char **args);
void shell_cd(char **args);
int shell_setenv(char **args);
/* utility_func3.c */
char *_memset(char *, char, unsigned int);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_realloc(void *, unsigned int, unsigned int);
void *_calloc(unsigned int nmemb, unsigned int size);
int _atoi(const char *str);
/* parser.c */
char **tokenize_input(char *input);
char **tokenize(char *str, const char *delim);
/* findin_path.c */
char *find_in_path(char *command);
/* signalhandler.c */
void handle_sigstp(int sig);
void handle_sigquit(int sig);
void handle_sigint(int sig);
/* getinput.c */
void free_last_input(void);
char *get_input(void);
/* utility_func2.c */
char *_strdup(const char *);
int _putchar(char);
unsigned int _strspn(char *s, char *accept);
char *_strcpy(char *, char *);
char *_strcat(char *, const char *);
/* utility_func1.c */
char *_strchr(char *s, char c);
int _strlen(const char *);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strstr(char *haystack, char *needle);
int _strcmp(const char *s1, const char *s2);
/* free.c */
void free_path(void);
void free_error(char **argv, char *arg);
void free_tokens(char **ptr);
/* error.c */
void _puts(char *str);
void _puterror(char *err);
/* getpath.c */
char *get_path(void);

#endif
