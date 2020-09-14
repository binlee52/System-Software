#include <stdio.h>

int main(void) {
	int input = 0;
	int mask;

	while (1) {
		printf("Input Number(Decimal: if you input zero than exit): ");
		scanf_s("%d", &input);

		if (input == 0)
			break;

		for (int i = 31; i >= 0; i--) {
			mask = 1 << i;
			printf("%d", input & mask ? 1 : 0);

			if (i % 8 == 0)
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}