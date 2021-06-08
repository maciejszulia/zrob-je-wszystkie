
#include <stdlib.h>
#include <stdio.h>


void policz(char napis[])
{
	int i = 0, a = 0, b = 0;
	while (napis[i] != '\0')
	{
		if (napis[i] == 'a')
			a++;
		if (napis[i] == 'b')
			b++;
		i++;
	}
	printf("ilosc a: %d ilosc b: %d", a, b);
}

//void policz(char napis[])
//{
//	int temp[1000];
//	int i = 0;
//	while (napis[i] != '\0')
//	{
//		if(napis[sizeof(napis)-i] == )
//
//	}
//}

int main()
{

	char napis[] = "aba";


	policz(napis);




	return 0;
}