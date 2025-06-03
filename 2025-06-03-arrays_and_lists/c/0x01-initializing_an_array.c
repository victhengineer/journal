#include <stdio.h>
/**
 * main - Initialize and Array in Several ways
 *
 * Returns: 0
 */
int main() {
	// Initialize an integer array
	int numbers[5] = {10, 20, 30, 40, 50};
	int a;

	printf("The array elements of numbers are : \n");
	for (a = 0; a <= 4; a++) {
		printf("numbers[%d]: %d\n", a, numbers[a]);
	}

	// Initializing an Array to 0
	int array_of_zeros[5] = {0};
	int b;

	printf("The array elements of array_of_zeros are : \n");
	for (b = 0; b <= 4; b++) {
		printf("array_of_zeros[%d]: %d\n", b, array_of_zeros[b]);
	}

	// Partial Initialization of an Array
	int partial_array[5] = {1, 2}; // The rest of the values set to zero
	int c;

	printf("The array elements of partial_array are : \n");
	for (c = 0; c <= 4; c++) {
		printf("partial_array[%d]: %d\n", c, partial_array[c]);
	}

	// Partial and Specific Elements Initalization
	int partial_array_with_specific_value[5] = {1, 2, [4] = 4};
	int d;

	printf("The array elements of partial_array_with_specific_value are : \n");
	for (d = 0; d <= 4; d++) {
		printf("partial_array_with_specific_value[%d]: %d\n", d, partial_array_with_specific_value[d]);
	}
	return 0;
}
