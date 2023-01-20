#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
typedef unsigned int size_t;
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
