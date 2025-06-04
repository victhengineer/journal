#include <stdio.h>
/**
 * main - Prints out index, value and addresses of an array
 *
 * Returns: Zero
 */
int main () {
	int arr[5] = {45, 55, 65, 75, 85};
	int i;

	for (i = 0; i <=4; i++) {
		printf("arr[%d]: %d \t Address: %p\n", i, arr[i], (void*)&arr[i]);
	}
	return 0;
}
