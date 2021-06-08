#include<stdlib.h>
#include<stdio.h>



int main()
{
	unsigned int n = 1;
	scanf_s("%u", &n);

	if (n > 10)
	{
		while (n > 10)
		{
			scanf_s("%u", &n);
			printf("\n zla liczba!\n");
		}
	}



	//int A[n][n];
	//int B[n][n];

	// nie umiem dwu-wymiarowych tablic sory



	return 0;
}