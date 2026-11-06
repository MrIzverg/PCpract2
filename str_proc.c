#include <ctype.h> 
#include "str_proc.h"

int count_letters(const char *s)
{
    int count = 0;
    for (; *s; s++)
        if (isalpha((unsigned char)*s)) count++;
        count++;
    return count;
}