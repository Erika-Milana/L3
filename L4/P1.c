//1. Sa se scrie un program care calculeaza suma elementelor unui
//vector folosindu - ne doar de variabile de tip pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
		int *s, *n, *v, *i;

		s = (int*)malloc(sizeof(int));
		n = (int*)malloc(sizeof(int));
		i = (int*)malloc(sizeof(int));
		printf("Cate numere doriti?\n"); 
		scanf("%d", n);
        v = (int*)malloc((*n) * sizeof(int));

		for ((*i) = 0; (*i) < (*n); (*i)++)
	        scanf("%d", (v + (*i)));
		
        (*s) = 0;

		for ((*i) = 0; (*i) < (*n); (*i)++)
		    (*s) = (*s) + *(v + (*i));
		

		printf("Suma este %d.\n", *s);

	     system("pause");
	     return 0;
}