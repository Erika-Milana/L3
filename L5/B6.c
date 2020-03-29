//6. Se citeste de la tastatura un numar zecimal pâna în 255. Sa
//se Înscrie într - o stiva reprezentarea sa binara.Sa se
//genereze pe stack cea mai mare valoarea posibila.
//A) Sa se implementeze citirea conditionata pâna la 255.
//B) Sa se realizeze transformarea din zecimal în binar.
//C) Adaugarea fiecarui bit într - o stiva
//D) Sa se genereze valoarea maxima posibila din valorile de
//pe stiva.
//27 -> 0001 1011 (val binara) – Stack initial
//1111 0000 – Valoarea maxima
//5 ->; 0000 0101 (val binara) – Stack initial
//1100 0000 – Valoarea maxima
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 8 //Pre-processor Macro
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
	int n,k=0,i,tru=0,fse;
	do 
	{

		printf("Cititi un numar zecimal pana in 255.\n");
		scanf("%d", &n);
	}
		while (n > 255);
	
	while (n != 0)
	{
		push(n % 2);
		n = n / 2;
		k++;
    }
	if (k != 8)
		do 
		{
			push(0);
			k++;
		} while (k != 8);
	traverse();
	for (i = 0; i <= top; i++)
		if (stack[i] == 1)
			tru++;
	fse = 8 - tru;
	for (i = 0; i < fse; i++)
		stack[i] = 0;
	for (i = fse; i <= top; i++)
		stack[i] = 1;
	traverse();

	system("pause");
	return 0;
}
