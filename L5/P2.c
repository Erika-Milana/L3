//2. Se citeste de la tastatura un numar C cu valori posibile
//intre 0 - 7. Dupa citirea numarului C se vor citi de la tastatura
//N numere iar acele numere care au reprezentarea lor
//binara, bitul de pe pozitia C cu valoare 1, vor fi introduse
//intr - o stiva. Sa se afiseze in final tot continutul stivei
//(indiferent de ordine)
//Ex:
//C = 2
//N = 5
//- Acum se citesc 5 numere :
//	1 2 3 4 5
//	- Se afiseaza la sfarsit
//	4 5
//	Deoarece 4 = 100 si 5 = 101, bitul de pe pozitia 2 este 1;
/*Stack implementation using static array*/
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 10 //Pre-processor Macro
int stack[CAPACITY], top = -1;
void push(int x)
{
	if (isFull())
	
		printf("Stack is overflow.\n");

	else

	{
		top++;
		stack[top] = x;
		printf("%d pushed\n", x);
	}
}
int isFull()
{
	if (top == CAPACITY - 1)
		return 1;
	else
		return 0;
}
int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
void traverse()
{
	if (isEmpty())
		printf("Stack is empty.\n");
	else
	{
		int i;
		printf("Stack elements: \n");
		for (i = 0; i <= top; i++)
			printf("%d\n", stack[i]);
	}
}
int main(void)
{
	int c,n,i,x;
	printf("Cititi o valoare intre 0 si 7:\n");
	scanf("%d", &c);
	printf("Cate numere doriti?\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if((1&(x>>c))==1)
			push(x);
	}
	traverse();
	system("pause");
	return 0;
}