#include <stdio.h>
/**
 * main - Demonstrates how to declare and access elements of 2D arrays
 *
 * Returns: 0
 */
int main() {
	/* Declaration */
	int two_d[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	int i, j;
	int counter = 1;

	/* Accessing the first elements of each arrays */
	printf("First Element of the 1st array two_d[0][0]: %d\n", two_d[0][0]);
	printf("First Element of the 2nd array two_d[1][0]: %d\n", two_d[1][0]);
	printf("First element of the 3rd array two_d[2][0]: %d\n", two_d[2][0]);

	/* Printing out the elements of the array */
	for (i = 0; i <= 2; i++) {
		printf("Array %d at index %d: ", counter, i);
		for (j = 0; j <= 4; j++) {
			printf("%d", two_d[i][j]);
			if (j <= 3) {
				printf(", ");
			}
		}
		printf("\n");
		counter++;
	}
	return 0;
}
