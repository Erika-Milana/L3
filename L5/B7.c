//7. Sa se scrie un program care verifica daca un numar citit de
//la tastatura pâna în valoarea de 65535 este palindrom atât în
//baza 2 cât si în baza 10. Verificarea ca numarul ar fi
//palindrom sa se implementeze cu ajutorul unui stack.
//A) Sa se implementeze citirea conditionata pâna la 65535.
//B) Sa se realizeze transformarea din zecimal în binar.
//C) Adaugarea fiecarui bit într - un stack
//D) Adaugarea fiecarei cifre într - un alt stack.
//E) Verificarea ca cele doua variante sunt palindrom sau nu.
//585 = 1001 0 0 1001 (binary)– PALINDROM
//Palindrom – O secventa de caractere care se citeste exact la
//fel indiferent de directia de citire(stânga dreapta sau dreapta
//	– stânga)
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 16 //Pre-processor Macro
int stack1[CAPACITY-11], stack2[CAPACITY], top1=-1, top2=-1;
//first stack(decimal)
void pushdecimal(int x)
{
	if (isFulldecimal())

		printf("Stack is overflow.\n");

	else

	{
		top1++;
		stack1[top1] = x;
		printf("%d pushed\n", x);
	}
}
int isFulldecimal()
{
	if (top1 == CAPACITY-12)
		return 1;
	else
		return 0;
}
int isEmptydecimal()
{
	if (top1 == -1)
		return 1;
	else
		return 0;
}
void traversedecimal()
{
	if (isEmptydecimal())
		printf("Stack is empty.\n");
	else
	{
		int i;
		printf("Stack elements: \n");
		for (i = 0; i <= top1; i++)
			printf("%d\n", stack1[i]);
	}
}
//second stack(binary)
void pushbinary(int x)
{
	if (isFullbinary())

		printf("Stack is overflow.\n");

	else

	{
		top2++;
		stack2[top2] = x;
		printf("%d pushed\n", x);
	}
}
int isFullbinary()
{
	if (top2 == CAPACITY - 1)
		return 1;
	else
		return 0;
}
int isEmptybinary()
{
	if (top2 == -1)
		return 1;
	else
		return 0;
}
void traversebinary()
{
	if (isEmptybinary())
		printf("Stack is empty.\n");
	else
	{
		int i;
		printf("Stack elements: \n");
		for (i = 0; i <= top2; i++)
			printf("%d\n", stack2[i]);
	}
}
int main(void)
{
	int n,m,i,j,ok1=1,ok2=1;
	do
	{
        printf("Cititi un numar zecimal pana in 65535.\n");
		scanf("%d", &n);
	} while (n > 65535);
	m = n;
	while (m != 0)
	{
		pushdecimal(m % 10);
		m = m / 10;
	}
	i = 0;
	j = top1;
	while (i < j)
	{
		if (stack1[i] != stack1[j])
			ok1 = 0;
		i++;
		j--;
	}
		

	while (n != 0)
	{
		pushbinary(n % 2);
		n = n / 2;
	}

		i = 0;
		j = top2;
		while (i < j)
		{
			if (stack2[i] != stack2[j])
				ok2 = 0;
			i++;
			j--; 
		}
		if (ok1 == 1)
			printf("Numarul in zecimal este palindrom.\n");
		else
			printf("Numarul in zecimal nu este palindrom.\n");
		traversedecimal();
		if (ok2 == 1)
			printf("Numarul in binar este palindrom.\n");
		else
			printf("Numarul in binar nu este palindrom.\n");
		traversebinary();
		system("pause");
		return 0;
}