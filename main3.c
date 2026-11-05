#include <stdio.h>
#include "str_io.h"
#include "str_words.h"

int main()
{
    char s[256];
    input_string(s, sizeof(s));
    printf("До: ");
    print_string(s);
    swap(s);
    printf("До: ");
    print_string(s);
    return 0;
}