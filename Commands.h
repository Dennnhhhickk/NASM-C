#include <stdio.h>
#include "functions.h"

int commande_list_size = 4;
char* commande_list[] = {"-help", "-i", "-a", "-show"};
char* description_list[] = {"PRINT ALL COMMANDES", "PRINT COUNT ITTERATIONS", "PRINT COORDS OF PERESECHENIA", "PRINT ALL INTEGRALS"};

void func(int commande, int size, double a[], int b[])
{
	switch (commande)
	{
		case 0:
			for (int i = 0; i < commande_list_size; i++)
				printf("%s\t\t%s\n", commande_list[i], description_list[i]);
			break;
		case 1:
			printf("ITTERATION:\n");
			for (int i = 0; i < size; i++)
				printf("%d-%d %d\n", i + 1, (i + 1) % size + 1, b[i]);
			break;
		case 2:
			printf("COORDS:\n");
			for (int i = 0; i < size; i++)
				printf("%d-%d x = %f\n", i + 1, (i + 1) % size + 1, a[i]);
			break;
		case 3:
			printf("INTEGRALS:\n");
			for (int i = 0; i < size; i++)
				printf("%d %f\n", i + 1, a[3 + i]);
			break;
		default:
			printf("Net sovpadeniy\n");
	}
}
