/*5. Sa se verifice daca operatia BINARA de "SAU" ("OR") aplicata pe un sir de
"N" numere intregi citit de la tastatura rezulta un numar par sau impar. 
NU aveti voie sa folositi "%", impartire cu rest / modulo.
Help: A se consulta tabelul de adevar in cadrul operatilor de tip binary
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,v[50],comp=0;
	printf("Cate numere doriti?\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]); 
	comp = v[0] | v[1];
	for (i = 2; i < n; i++)
	comp = v[i] | comp;
	if ((comp & 1) == 1)
		printf("Va rezulta un numar impar.\n");
	else
		printf("Va rezulta un numar par\n");
	system("pause");
	return 0;
}