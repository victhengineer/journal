#include <stdio.h>
/**
 * main - Prove name of an array is a pointer to the fist element
 *
 * Returns: Always 0
 */
int main() {
	int arr[8] = {9, 19, 29, 39, 49, 59, 69, 79};

	printf("1st element: %d - Its address: %p\n", arr[0], &arr[0]);
	printf("Identifier as a pointer: %p\n", arr);
	return 0;
}
