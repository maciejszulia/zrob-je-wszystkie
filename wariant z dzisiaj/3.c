#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define rozmiar 20

struct Auto {
    char model[rozmiar];
    char marka[rozmiar];
    float cena;
};

void wczytaj(struct Auto tab2[2])
{
    for(int i = 0; i < 2; i++)
    {
        printf("Podaj model: ");
        scanf("%s", tab2[i].model);
        printf("Podaj marke: ");
        scanf("%s", tab2[i].marka);
        printf("Podaj cene: ");
        scanf("%f", &tab2[i].cena);
        printf("\n");
    }

}

void wyszukajMarka(struct Auto tab2[2])
{
    char mareczka[rozmiar];
    printf("Podaj model do wyszukania: ");
    scanf("%s", mareczka);
    printf("Model\tMarka\tCena\n");
    for(int i = 0; i < 2; i++)
    {
        if(strcmp(tab2[i].marka, marki) == 0)
        {
            printf("%s\t%s\t%f\n", tab2[i].model, tab2[i].marka, tab2[i].cena);
        }
        else
        {
            printf("===\t===\t===\n");
        }
    }
    printf("\n");
}
void wyszukajCena(struct Auto tab2[2])
{
    float cenki;
    printf("Podaj cene do wyszukania ponizej: ");
    scanf("%f", &cenki);
    printf("Model\tMarka\tCena\n");
    for(int i = 0; i < 2; i++)
    {
        if(tab2[i].cena < cenki)
        {
            printf("%s\t%s\t%f\n", tab2[i].model, tab2[i].marka, tab2[i].cena);
        }
        else
        {
            printf("===\t===\t===\n");
        }
    }
    printf("\n");
}

void wyszukajModel(struct Auto tab2[2])
{
    char modelki[rozmiar];
    printf("Podaj model do wyszukania: ");
    scanf("%s", modelki);
    printf("Model\tMarka\tCena\n");
    for(int i = 0; i < 2; i++)
    {
        if(strcmp(tab2[i].model, modelki) == 0)
        {
            printf("%s\t%s\t%f\n", tab2[i].model, tab2[i].marka, tab2[i].cena);
        }
    }
    printf("\n");
}

int main()
{
    struct Auto tab2[2];
    wczytaj(tab2);
    wyszukajMarka(tab2);
    wyszukajCena(tab2);
    wyszukajModel(tab2);
    return 0;
}