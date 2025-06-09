#include <stdio.h>
/**
 * main - Demonstrate matrix multiplication using 3 x 3 matrix
 * Description: Matrices are only multipliable if the number of rows of
 * in one matrix equals to the number of column in the other matrix
 *
 * Returns: 0
 */
int main() {
	int i, j, k, sum;
	int matrix_one[3][3] = {
		{11, 12, 13},
		{14, 15, 16},
		{17, 18, 19}
	};
	int matrix_two[3][3] = {
		{21, 22, 23},
		{24, 25, 26},
		{27, 28, 29}
	};

	// multiplication logic
	// Selects the row matrix one
	for (i = 0; i <= 2; i++) {
		// Selects the column in matrix two
		for (j = 0; j <= 2; j++) {
			sum = 0;
			// multiply row value with every column value to get product
			for (k = 0; k <= 2; k++) {
				sum += matrix_one[i][k] * matrix_two[k][j];
			}
			printf("%d", sum);
			if (j <= 1) {
				printf(" ");
			}
		}
		printf("\n");
	}
	return (0);
}

