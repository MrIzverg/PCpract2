#include <stdio.h>
#include "str_io.h"
#include "str_proc.h"

int main()
{
    char s[256];
    input_string(s, sizeof(s));
    print_string(s);
    printf("Букв в строке: %d\n", count_letters(s));
    return 0;
}