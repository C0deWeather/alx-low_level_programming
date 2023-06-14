#ifndef MAIN_H
#define MAIN_H

#ifndef NULL
#define NULL ((void *)0)
#endif /*NULL*/

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _strlen(char *s);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int numw(char *str);
char **WordSplit(char **dest, char *str);

#endif
