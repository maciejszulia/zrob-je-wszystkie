#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, x;
    char c;
    printf("Podaj pierwsza liczbe : \n");
    scanf("%d", &a);
    printf("Podaj druga: \n");
    scanf("%d", &b);
    getchar();
    printf("Podaj znak( - + * / ): \n");
    scanf("%c", &c);

    switch (c)
    {
    case '-': x = a - b;
        printf("Wynik to: %d\n", x);
        break;
    case '+': x = a + b;
        printf("Wynik to: %d\n", x);
        break;
    case '': x = ab;
        printf("Wynik to: %d\n", x);
        break;
    case '/':
        printf("Wynik to: %d\n", x);

        if (b == 0)
        {
            printf("NIE MOZNA DZIELIC PRZEZ 0 !!! ");
        }
        else
        {
            '/'; x = a / b;
            printf("Wynik to: %d\n", x);
        }
        break;

    }
    return 0;
}