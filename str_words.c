#include <string.h>
#include <ctype.h>
#include "str_words.h"

void swap(char *s)
{
    char res[512] = "";
    char first[128], last[128], mid[256] = "";
    int i = 0, j, len = (int)strlen(s);

    while (i < len && isspace((unsigned char)s[i])) i++;
    j = 0;
    while (i < len && !isspace((unsigned char)s[i])) first[j++] = s[i++];
    first[j] ='\0';

    int end = len - 1;
    while (end >= 0 && isspace((unsigned char)s[end])) end--;
    int start_last = end;
    while (start_last >= 0 && !isspace((unsigned char)s[start_last])) start_last--;
    start_last++;

    strncpy(last, s + start_last, end - start_last + 1);
    last[end - start_last + 1] = '\0';

    if (i < (start_last))
    {
        strncpy(mid, s + i, start_last - i);
        mid[start_last - i] = '\0';
    }

    strcat(res, last);
    strcat(res, mid);
    strcat(res, first);

    strcpy(s, res);
}