//2. Sa se scrie un program care insumeaza elementele intr - o metoda
//separate de metoda main, folosind transmiterea prin referinta.
#include<stdio.h>
#include<stdlib.h>

void suma(int *n)
{
	int i, s = 0,*v;
	v = (int*)malloc((*n) * sizeof(int));
	for (i = 0; i < *n; i++)
		scanf("%d", &v[i]);
	for (i = 0; i < *n; i++)
		s = s + v[i];
	printf("Suma este %d.\n", s);
}
int main()
{
	int *n;
	printf("Cate numere doriti?\n");
	scanf("%d", &n);
	suma(&n);

	system("pause");
	return 0;
}