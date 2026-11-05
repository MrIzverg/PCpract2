#include "str_proc.h"

int count_letters(const char *s)
{
    int count = 0;
    for (; *s; s++)
        if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z') || (*s >= 'А' && *s <= 'я') || *s == 'Ё' || *s == 'ё')
        count++;
    return count;
}