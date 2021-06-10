#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

struct element* utworz()
{
    struct element* temp = malloc(sizeof(struct element));
    temp->next = NULL;
    return temp;
};

void dodaj(struct element* Lista, int a)
{
    struct element* wsk = Lista;
    while (wsk->next != NULL)
    {
        wsk = wsk->next;
    }
    wsk->next = malloc(sizeof(struct element));
    wsk = wsk->next;
    wsk->i = a;
    wsk->next = NULL;
}

void wyswietlListeZGlowa(struct element* Lista)
{
    struct element* temp = Lista->next;
    if (temp == NULL)
    {
        printf("Lista jest pusta\n");
    }
    while (temp != NULL)
    {
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    printf("----\n");
}

void wypiszwskazniki(struct element* Lista)
{
    struct element* temp = Lista->next;
    if (temp == NULL)
    {
        printf("Lista jest pusta\n");
    }
    printf("\n----\n");
    while (temp != NULL)
    {
        printf("\n%p\n", temp);
        temp = temp->next;
    }
    printf("----\n");
}


int ilosc(struct element* Lista)
{
    int ile = 0;
    struct element* temp = Lista->next;
    if (temp == NULL)
    {
        printf("Lista jest pusta\n");
    }
    while (temp != NULL)
    {
        temp = temp->next;
        ile++;

    }
    return ile;
}

int main()
{
    struct element* lista1 = utworz();
    wyswietlListeZGlowa(lista1);
    dodaj(lista1, 2);
    dodaj(lista1, -4);
    dodaj(lista1, 45);
    wyswietlListeZGlowa(lista1);
    printf("Elementow w liscie jest: %d", ilosc(lista1));
    wypiszwskazniki(lista1);
    return 0;
}