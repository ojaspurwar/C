#include <stdio.h>

int main(void) {
	int n;
	int number;
	int sum = 0;

	printf("Enter n Numbers:");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &number);
		if (number % 2 != 0) {
			sum += number;
		}
	}

	printf("Sum of odd numbers: %d\n", sum);
	return 0;
}
