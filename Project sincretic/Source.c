#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 50
#define citire(m) scanf("%d",&m)
#define afisare(m) printf(" %d ",m)
 
/*Se d? o matrice de dimensiunea M x N, generat? aleatoriu. Se cere s? se calculeze: 
a) Suma elementelor aflate pe diagonala principal?, respectiv pe diagonala secundar? 
b) Minimul ?i maximul elementelor aflate sub diagonala principal?, respectiv sub diagonala secundar?.*/

void MatriceCaractere(int v[][10], int r,int c) {

	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf(" %d", &v[i][j]);
			
		}



}
void AfisareCaractere(int v[][10], int r, int c) {

	int i, j;
	for (i = 0; i < r; i++) {
		printf("\n");
		for (j = 0; j < c; j++)
			printf("  %d ", v[i][j]);
	}


}


void SumaDiagPrinc(int v[][10], int r, int c ) {

	int i, j;
	int suma = 0;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {

			if (i == j) {
				suma += v[i][j];
				
			}


		}
	printf("Suma de pe diagonla principala este egala cu %d", suma);
}
int main() {


	int  r,c, opt;
	int citit = 0;
	char b[10][10];

	printf("Dati numarul de linii si de coloane: \n");
	citire(r);
	citire(c);

	while (1) {

		printf("\n 1.Citire  \n");
		printf("2.Afisare \n");
		printf("3. Suma elementelor aflate pe diagonala principala, respectiv pe diagonala secundara\n");
		printf("4. Minimul si maximul elementelor aflate sub diagonala principala, respectiv sub diagonala secundara\n");
		printf("0. Iesire\n");
		printf("Alegeti o optiune\n");
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			citit = 1;
			MatriceCaractere(b, r,c);
		break;
		case 2:
			if (citit == 0)
				printf("Cititi matricea intai.\n");
			else
				AfisareCaractere(b, r,c);
			break;
		case 3:
			if (citit == 0)
				printf("Cititi matricea intai.\n");
			else
				SumaDiagPrinc(b[10][10], r, c);

			break;
		case 0:
			exit(0);
			break;

		default: printf("Alegeti o optiune\n");
			break;
		}
	}
	system("pause");
	return 0;
}