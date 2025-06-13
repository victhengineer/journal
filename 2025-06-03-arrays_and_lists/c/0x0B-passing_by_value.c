#include <stdio.h>
/**
 * average - Calculates the average of an array
 * data: Array of value to calculate the average
 *
 * Returns: average of the numbers
 */
float average(int data[5]) {
	int i;
	int sum = 0;

	printf("[");
	for (i = 0; i <= 4; i++) {
		printf("%d", data[i]);
		if (i <= 3) {
			printf(", ");
		}
		sum += data[i];
	}
	printf("]\n");
	return ((float) sum / 5);
}

/**
 * main - Entry Point
 *
 * Return: 0
 */
int main() {
	int nums[5] = {5, 6, 7, 8, 9};
	float avg = average(nums);
	printf("Average: %f\n", avg);
	return (0);
}
