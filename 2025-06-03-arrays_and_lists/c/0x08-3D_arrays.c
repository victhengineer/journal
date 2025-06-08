#include <stdio.h>
/**
 * main - Demostrate hos to declare, initialize and iterate over 3D-arrays
 *
 * Return: 0
 */
int main() {
	int i, j, k;
	int three_d[3][3][3] = {
		{
			{11, 12, 13},
			{14, 15, 16},
			{17, 18, 19}
		},
		{
			{21, 22, 23},
			{24, 25, 26},
			{27, 28, 29}
		},
		{
			{31, 32, 33},
			{34, 35, 36},
			{37, 38, 39}
		}
	};

	// Print out the elements of each array
	for (i = 0; i <= 2; i++) {
		for(j = 0; j <= 2; j++) {
			for (k = 0; k <= 2; k++) {
				printf("%d", three_d[i][j][k]);
				if (k <= 1) {
					printf(", ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return (0);
}
