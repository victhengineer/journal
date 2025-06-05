#include <stdio.h>
/**
 * main - Gets the size of an array
 *
 * Returns: Always zero
 */
int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int len = sizeof(arr);
	int size = len / sizeof(arr[0]);

	printf("Size of array: %d\n Number of elements: %d\n", len, size);
	return 0;
}
