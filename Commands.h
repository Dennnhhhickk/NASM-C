#include <stdio.h>
#include "functions.h"

int commande_list_size = 6;
char* commande_list[] = {"-help", "-i", "-a", "-show", "-testi", "-testr"};
char* description_list[] = {"Display all available commands", "Display the number of iterations", "Display the point of intersection", "Display all the integrals", "Allows you to test the integration function", "Allows you to test the root function"};

void func(int commande, int size, double a[], int b[])
{
	switch (commande)
	{
		case 0:
			printf("COMMANDS:\n");
			for (int i = 0; i < commande_list_size; i++)
				printf("%s\t\t%s\n", commande_list[i], description_list[i]);
			break;
		case 1:
			printf("ITERATION:\n");
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
		case 4:
			{
				printf("TESTING INTEGRAL\n");
				double l, r;
				scanf("%lf %lf", &l, &r);
				printf("%f\n", integral(testfunc, l, r, 1e-6));
			}
			break;
		case 5:
			{
				printf("TESTING ROOT:\n");
				double l, r;
				scanf("%lf %lf", &l, &r);
				printf("%f\n", root(testfunc1, testfunc2, l, r, 1e-6));
			}
			break;
		default:
			printf("No matches\n");
	}
}
