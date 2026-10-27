#include <stdio.h>

int main(void) {
	int n;
	int number;
	int odd_count = 0;

	printf("Enter n Numbers:");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &number);
		if (number % 2 != 0) {
			odd_count++;
		}
	}

	printf("Number of odd values: %d\n", odd_count);
	return 0;
}
