#ifndef VAR_FUNC
#define VAR_FUNC
#include <string.h>
#include <stdlib.h>
typedef struct types
{
    char type;
    void (*function)( va_list);
} types_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
#endif /* VAR_FUNC */
