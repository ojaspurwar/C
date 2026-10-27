#include <stdio.h>

int main() {
	int n;
	int number;
	int last_even = 0;
	int found_even = 0;

    printf("Enter n Numbers:");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &number);
		if (number % 2 == 0) {
			last_even = number;
			found_even = 1;
		}
	}

	if (found_even) {
		printf("%d\n", last_even);
	} else {
		printf("No even number found\n");
	}

	return 0;
}
