#include <stdio.h>
#include <stdlib.h>

void zamiana(int* a, int* b)
{
    if(*b < *a)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    printf("Pierwsza liczba: %d\nDruga liczba: %d", *a, *b);
}

int main()
{
    int a, b;
    printf("Podaj 2 liczby typu int,\njesli druga bedzie mniejsza, zostana zamienione:\n");
    scanf("%d %d", &a, &b);
    zamiana(&a, &b);
    return 0;
}