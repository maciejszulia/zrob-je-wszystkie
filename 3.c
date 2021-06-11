#include <stdio.h>
#include <stdlib.h>

struct car{
   char  model[50],marka[50];
   int   cena;
};
void add_auto(struct car* samochod){
    printf("Podaj markę:\n");
    scanf("%50s", samochod->marka);
    printf("Podaj model:\n");
    scanf("%50s", samochod->model);
    printf("Podaj cene:\n");
    scanf("%d", samochod->cena);
}
void show(struct car in){
    printf("Marka: %s\n",in.marka);
    printf("Model: %s\n",in.model);
    printf("Cena: %d\n",in.cena);
}
void show_brand(struct car*komis,char*brand,int n){
    for(int i=0;i<n;i++){
        int test=1;
        for(int j=0;brand[j]!=0;j++){
            if(brand[j]!=komis[i].marka[j]){
                test=0;
                break;
            }
        }
        if(test==1){
            show(komis[i]);
        }
    }
}
void show_cheaper(struct car*komis,int price,int n){
    for(int i=0;i<n;i++){
        if(price>komis[i].cena){
            show(komis[i]);
        }
    }
    return 0;
}
main(){
    struct car c1,c2;
    struct car ko[2]={c1,c2};
    //show(ko[0]);
    add_auto(&ko[0]);

    //add_auto(ko,1);
    return 0;
}
