#include<stdlib.h>
#include<stdio.h>
void show(int**tablica,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",tablica[i][j]);
        }
        printf("\n");
    }
}
void wczytaj(int**tablica,int n){
    tablica=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        tablica[i]=malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &tablica[i][j]);
        }
    }
}
void dodaj(int**tab1,int**tab2,int n){
    int**out=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        out[i]=malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            out[i][j]=tab1[i][j]+tab2[i][j];
        }
    }
    show(out,n);
}
int main(){
	int n=11;
	int **tab1,**tab2;
    while (n > 10){
        scanf("%d", &n);
        if(n>10)
        printf("zla liczba!\n");
    }
    wczytaj(tab1,n);
    wczytaj(tab2,n);
    dodaj(tab1,tab2,n);
    return 0;
}
