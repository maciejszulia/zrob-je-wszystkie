#include<stdlib.h>
#include<stdio.h>
void wypisz(int*tablica){
    for(int i=0;i<11;i+=2){
        printf("%d ",tablica[i]);
    }
}
int main(){
	int tab[11]={1,2,3,4,5,6,7,8,9,10};
	wypisz(tab);
    return 0;
}
