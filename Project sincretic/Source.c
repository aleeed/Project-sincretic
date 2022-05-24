#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 50
#define citire(m) scanf("%d",&m)
#define afisare(m) printf(" %d ",m)
#include<time.h>

 
/*Se da o matrice de dimensiunea M x N, generata aleatoriu. Se cere sa se calculeze: 
a) Suma elementelor aflate pe diagonala principala, respectiv pe diagonala secundara 
b) Minimul si maximul elementelor aflate sub diagonala principala, respectiv sub diagonala secundara.*/

void MatriceCaractere(int v[MAX][MAX], int r,int c) {

	int i, j;
	
	srand(time(0));
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {

			v[i][j] = rand() % 100;
			
		}
		//printf("\n");
	}
	
}
void AfisareCaractere(int v[MAX][MAX], int r, int c) {

	int i, j;
	for (i = 0; i < r; i++) {
		printf("\n");
		for (j = 0; j < c; j++)
			printf("  %d ", v[i][j]);
	}
}


void SumaDiagPrinc(int v[MAX][MAX], int r, int c ) {

	int i, j;
	int suma = 0, suma1 = 0;

	if (r == c) {
		for (i = 0; i < r; i++)
			for (j = 0; j < c; j++) {

				if (i == j) {
					suma += v[i][j];

				}
				if ((i + j) == (r - 1)) {
					suma1 += v[i][j];
				}

			}
		printf("Suma de pe diagonla principala este egala cu %d \n", suma);
		printf("Suma de pe diagonla secundara este egala cu %d \n", suma1);
	}
	else
	{
		printf("Nu se poate calcula suma diagonalelor matricei deoarece aceasta nu este patratica \n");
	}
}

void identificareMaxMin(int v[MAX][MAX], int r, int c) {
	int i, j;
	int max = v[0][0], min = v[0][0];
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {

			if (v[i][j]> max) {
				max = v[i][j];

			}
			if (v[i][j]< min) {
				min= v[i][j];
			}
		}
	printf("Maximul este  %d \n", max);
	printf("Minimul este %d \n", min);

}
int main() {


	int  r,c, opt;
	int citit = 0;
	int b[MAX][MAX];

	printf("Dati numarul de linii si de coloane: \n");
	citire(r);
	citire(c);

	while (1) {

		printf("\n1.Citire  \n");
		printf("2.Afisare \n");
		printf("3. Suma elementelor aflate pe diagonala principala, respectiv pe diagonala secundara\n");
		printf("4. Minimul si maximul elementelor aflate sub diagonala principala, respectiv sub diagonala secundara\n");
		printf("0. Iesire\n");
		printf("\nAlegeti o optiune\n");
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			citit = 1;
			MatriceCaractere(b, r,c);
		break;
		case 2:
			if (citit == 0)
				printf("\nCititi matricea intai.\n");
			else
				AfisareCaractere(b, r,c);
			break;
		case 3:
			if (citit == 0)
				printf("\nCititi matricea intai.\n");
			else
				SumaDiagPrinc(b, r, c);

			break;
		case 4:
			if (citit == 0)
				printf("\nCititi matricea intai.\n");
			else
				identificareMaxMin(b, r, c);
			break;
		case 0:
			exit(0);
			break;

		default: printf("\nAlegeti o optiune\n");
			break;
		}
	}
	system("pause");
	return 0;
}