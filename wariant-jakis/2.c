#include <stdio.h>
#include <stdlib.h>

void wczytaj(int n, int tab[][n]) {
    printf("Podaj wartosci do tablicy o wymiarach %d x %d: ", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &tab[i][j]);
        }
    }
}

void maxim(int n, int tab[][n]) {
    int maks, nr_kolumny;

    for (int i = 0; i < n; i++) {
        int suma = 0;
        for (int j = 0; j < n; j++) {
            suma += tab[j][i];
            if (i == 0) {
                maks = suma;
                nr_kolumny = i;
            }
            if (suma > maks) {
                maks = suma;
                nr_kolumny = i;
            }
        }
    }
    printf("Suma: %d, indeks kolumny: %d", maks, nr_kolumny);
}

int main() {

    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    while (n > 10) {
        printf("!! n nie moze byc wiekszy niz 10, podaj n jeszcze raz: ");
        scanf("%d", &n);
    }
    int tab[n][n];
    wczytaj(n, tab);
    maxim(n, tab);
    return 0;
}