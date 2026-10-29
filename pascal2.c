#include <stdio.h>

int main(void)
{
	int rows;

	printf("Enter number of rows: ");
	if (scanf("%d", &rows) != 1 || rows <= 0) {
		return 1;
	}

	for (int i = 0; i < rows; ++i) {
		for (int space = 0; space < rows - i - 1; ++space) {
			printf("  ");
		}

		long long value = 1;
		for (int j = 0; j <= i; ++j) {
			printf("%4lld", value);
			value = value * (i - j) / (j + 1);
		}
		putchar('\n');
	}

	return 0;
}
