#include <stdio.h>
/**
 * main - Demonstrate sumation of row elements in 2D-arrays
 *
 *
 * Return: 0
 */
int main() {
	int i, j, sum;
	int two_d[3][5] = {
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};

	for (i = 0; i <= 2; i++) {
		sum = 0;
		for (j = 0; j <= 4; j++) {
			sum += two_d[i][j];
			printf("%d", two_d[i][j]);
			if (j <= 3) {
				printf(" + ");
			}
			else {
				printf(" = ");
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
