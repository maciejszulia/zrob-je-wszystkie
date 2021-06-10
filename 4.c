#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element* next;
};

void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element * wsk = Lista;
    if (wsk == NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(wsk!=NULL)
    {
        printf("%p\n",wsk);
        wsk=wsk->next;
    }
    printf("---\n");
}

int len(struct element*Lista)
{
    struct element * wsk = Lista;
    int i=0;
    while(wsk!=NULL)
    {
        i++;
        wsk=wsk->next;
    }
    return i;
}

int main()
{
    //pusta lista bez glowy
    struct element * Lista1 = NULL;
    wyswietlListeBezGlowy(Lista1);
    printf("%d\n",len(Lista1));
    // dodanie elementu 4 na liste bez glowy
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=4;
    wsk->next= NULL;
    Lista1=wsk;
    wyswietlListeBezGlowy(Lista1);
    printf("%d \n",len(Lista1));
    //puste lista z glowa
    struct element * Lista2 = malloc(sizeof(struct element));
    Lista2->next=NULL;
    return 0;
}
