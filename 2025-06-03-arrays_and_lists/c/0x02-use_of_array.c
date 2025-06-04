#include <stdio.h>
/**
 * main - Stores marks of 10 students in an Array and calculates the avg
 *
 * Returns: The average
 */

float main() {
	int marks[10] = {50, 55, 67, 73, 45, 21, 39, 70, 49, 51};
	int i, sum = 0;
	float avg;

	for (i = 0; i <= 9; i++) {
		sum += marks[i];
	}

	avg = (float)sum / 10;
	printf("Average: %f\n", avg);
	return avg;
}
