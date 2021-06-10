#include <stdio.h>
#include <stdlib.h>

#define TYDZIEN 7

struct dzienZKalendarza
{
    int miesiac;
    int dzien;
    float sredniaTemperatura;
};

void wczytajDzienZKaledarza(struct dzienZKalendarza* dzien)
{
    int wejscie;
    do
    {
        printf("Podaj miesiac ");
        scanf("%d", &wejscie);
    } while (wejscie < 1  wejscie > 12);

    dzien->miesiac = wejscie;

    do
    {
        printf("Podaj dzien ");
        scanf("%d", &wejscie);
    } while (wejscie < 1  wejscie > 31);

    dzien->dzien = wejscie;

    float temp;

    printf("Podaj srednia temperature ");
    scanf("%f", &temp);

    dzien->sredniaTemperatura = temp;

}

void wczytajDniZKaledarza(struct dzienZKalendarza* dzien, int ilosc)
{
    int i;
    for (i = 0; i < ilosc; i++)
    {
        wczytajDzienZKaledarza(&dzien[i]);
    }

}


float sredniaWMiesiacu(struct dzienZKalendarza* dni, int ilosc, int miesiac)
{
    float suma = 0;
    int licznik = 0;
    int i;
    for (i = 0; i < ilosc; i++)
    {
        if (dni[i].miesiac == miesiac)
        {
            suma += dni[i].sredniaTemperatura;
            licznik++;
        }
    }
    if (licznik != 0)
        return suma / (float)licznik;
    return 0.0;
}

int main()
{
    struct dzienZKalendarza tablicaDni[TYDZIEN];

    wczytajDniZKaledarza(tablicaDni, TYDZIEN);

    int i;
    for (i = 1; i < 13; i++)
        printf("%f\n", sredniaWMiesiacu(tablicaDni, TYDZIEN, i));

    return 0;
}