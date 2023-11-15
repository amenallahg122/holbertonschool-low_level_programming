#ifndef FUNC_POINTERS
#define FUNC_POINTERS
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* FUNC_POINTERS */
