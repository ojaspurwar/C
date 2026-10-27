#include <stdio.h>

int main(void) {
	int n;
	int number;
	int weighted_sum = 0;

    printf("Enter n Numbers:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &number);
		weighted_sum += i * number;
	}

	printf("%d\n", weighted_sum);
	return 0;
}
