//zad 4
//nie wiem czy to ejst dobrze
#include <stdlib.h>
#include <stdio.h>

int main()
{
	//int* lista;
	//lista = (int*)calloc(256, sizeof(int));

	int lista[256]; //tutaj mozna uzyc malloc? chyba....

	for (int i = 0; i < (sizeof(lista) / sizeof(int)); i++)
	{
		printf("%p\n", lista + i);
	}

	int iloscElem = 0;

	for (int i = 0; i < (sizeof(lista) / sizeof(int)); i++)
	{
		if ((lista + i) != NULL)
			iloscElem++;
	}

	printf("\n ilosc elementow w liscie: %d \n", iloscElem);



	return 0;
}