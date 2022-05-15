#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 


	void max_per_row(double *result,
		double matrix[][3],
		const int xmax,
		const int ymax)
	{
		int x = 0, y = 0;

		for (y = 0; y < ymax; y++)
			result[y] = y;
		for (y = 0; y < ymax; y++)
		{
			for (x = 0; x < xmax; x++)
			{
				if (matrix[y][x] > result[y])
					result[y] = matrix[y][x];
			}
		}
	}

	int main(int argc, char **argv)
	{
		double test1[3][3] = { {-10, -20, 0},
							 {-13, 0,  13},
							 {-99, 99.99, 100.01} };
		double result[10] = { 0 };
		int y = 0;
		max_per_row(result, test1, 3, 3);
		for (y = 0; y < 3; y++)
			printf("max row %d = %f\n", y, result[y]);
		return 0;
	}