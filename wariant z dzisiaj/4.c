#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utworz()
{
    return NULL;
};

struct element* dnk(struct element* list, int a)
{
    struct element* wsk;
    if(list == NULL)
    {
        wsk = malloc(sizeof(struct element));
        list = wsk;
    }
    else
    {
        wsk = list;
        while(wsk->next != NULL)
        {
            wsk = wsk->next;
        }
        wsk->next = malloc(sizeof(struct element));
        wsk = wsk->next;
    }
    wsk->i = a;
    wsk->next = NULL;
    return list;
};

struct element* usun(struct element* list, int a)
{
    struct element* wsk = list;
    if(list->i == a)
    {
        list = list->next;
        free(wsk);
    }
    struct element* wsk1 = list;
    while(wsk1->next != NULL)
    {
        if(wsk1->next->i == a)
        {
            struct element* us = wsk1->next;
            wsk1->next = us->next;
            free(us);
        }
        else
        {
            wsk1 = wsk1->next;
        }
    }
    struct element* tmp = list;
    if(tmp == NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(tmp != NULL)
    {
        printf("%d\n", tmp->i);
        tmp = tmp->next;
    }
    printf("======\n");
};

int main()
{
    struct element* l1 = utworz();
    l1 = dnk(l1, 5);
    l1 = dnk(l1, 4);
    l1 = dnk(l1, 3);
    l1 = dnk(l1, 4);
    l1 = dnk(l1, 5);
    usun(l1, 4);
    return 0;
}