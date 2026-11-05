#include <stdio.h>

int main()
{
    long n, temp;
    int flag = 1;

    printf("Введите число N: ");
    scanf("%ld", &n);

    temp = n;
    while (temp > 0)
    {
        if (temp % 10 >= 8)
        {
            flag = 0;
            break;
        }
        temp /= 10;
    }

    if (flag) printf("%ld может быть восьмеричным\n", n);
    else printf("%ld не может быть восьмеричным\n", n);
    return 0;
}