#include <stdio.h>
#include <stdlib.h>

void wypisz(int tab[10])
{
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 1)
		{
			printf("index: %i wartosc: %i\n", tab[i], i);
		}
	}
}

int main(int argc, char** argv)
{
	int i;

	int* tab = malloc(sizeof(int) * 10);

	for (i = 0; i < 10; i++)
		tab[i] = 0;


	//for (i = 0; i < 10; i++)
	//	printf("index: %i wartosc: %i\n", i, tab[i]);

	wypisz(tab);

	return 0;
}