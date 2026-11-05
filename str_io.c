#include <stdio.h>
#include "str_io.h"

void input_string(char *s, int size)
{
    printf("Введите строку: ");
    fgets(s, size, stdin);
}

void print_string(const char *s)
{
    printf("Строка: %s", s);
}