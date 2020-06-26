#include <stdio.h>

int main()
{
	int n = 10;
	int m;
	int numbers[10];
	int i, j, k;

	for (j = 0; j < 10; j++) {
		scanf("%d", &numbers[j]);
		for (k = 0; k < j; k++) {
			if (numbers[k] < numbers[j]) {
				m = numbers[k];
				numbers[k] = numbers[j];
				numbers[j] = m;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d", numbers[i]);
		if (i < 9) {
			printf(" ");
		}
	}

	return 0;
}
