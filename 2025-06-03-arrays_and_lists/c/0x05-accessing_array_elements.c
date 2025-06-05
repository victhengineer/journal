#include <stdio.h>
/**
 * main - Demo of how to access array elements
 *
 * Returns: 0
 */
int main() {
	int arr[5] = {9, 8, 7, 6, 5};
	int counter = 1;
	int i;

	/* Accesing array elements using index */
	printf("Element at 1st index is: %d\n", arr[0]);

	/* Loop through using index */
	for (i = 0; i < 5; i++) {
		printf("Element %d: %d\n", counter, arr[i]);
		counter++;
	}
	return 0;
}
