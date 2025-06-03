#include <stdio.h>
/**
 * main - Declares an array and prints the index and garbage values stored in them
 * Returns: zero
 */
int main() {
	int arr[5];
	int i;

	for (i = 0; i <= 4; i++) {
		printf("a[%d]: %d\n", i, arr[i]);
	}
	return 0;
}
