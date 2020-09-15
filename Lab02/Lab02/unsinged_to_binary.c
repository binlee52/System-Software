#include <stdio.h>

void intTobinary(int n)
{
	int mask;

	for (int i = 31; i >= 0; i--) {
		mask = 1 << i;
		printf("%d", n & mask ? 1 : 0);

		if (i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}

void shortTobinary(short n)
{
	int mask;

	for (int i = 15; i >= 0; i--) {
		mask = 1 << i;
		printf("%d", n & mask ? 1 : 0);

		if (i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}

int main(void) {
	int input = 0;

	// Decimal(Signed)
	int num1 = 0;
	int num2 = 0;

	// Hexical(Signed)
	int num3 = 0;
	int num4 = 0;

	// Decimal(Unsigned)
	unsigned int num5 = 0;
	
	// Hexical(Unsigned)
	unsigned int num6 = 0;

	short snum6 = 0x30; // 2byte
	short snum7 = -0x30;

	while (1) {
		printf("Input Number 1 (Decimal: if you input zero than exit): ");
		scanf_s("%d", &num1);
		intTobinary(num1);


		printf("Input Number 2 (Decimal: if you input zero than exit): ");
		scanf_s("%d", &num2);
		intTobinary(num2);


		printf("Input Number 3 (Hexical: if you input zero than exit): ");
		scanf_s("%x", &num3);
		intTobinary(num3);


		printf("Input Number 4 (Hexical: if you input zero than exit): ");
		scanf_s("%x", &num4);
		intTobinary(num4);


		printf("Input Number 5 (Decimal: if you input zero than exit): ");
		scanf_s("%u", &num5);
		intTobinary(num5);


		printf("Input Number 6 (Hexical: if you input zero than exit): ");
		scanf_s("%x", &num6);
		intTobinary(num6);


		// Unsigned <--- Signed
		printf("Unsigned <--- Signed\n");
		num5 = 0xffffffff;
		intTobinary(num5);


		// Signed <--- Unsigned
		printf("Signed <--- Unsigned\n");
		num4 = 0xffffffffu;
		intTobinary(num4);

		printf("Unsigned, Signed to Decimal\n");
		printf("%d\n%u\n", num4, num5);

		shortTobinary(snum6);

		// expanding
		printf("4 byte <--- 2 byte\n");
		
		num3 = snum6;	// 4byte <--- 2byte
		intTobinary(num4);

		num4 = snum7;	// 4byte <--- 2byte
		intTobinary(num4);


		// truncating
		printf("2 byte <--- 4 byte\n");
		
		snum6 = num3; // 2 byte <--- 4 byte
		shortTobinary(snum6);

		snum7 = num4;
		shortTobinary(snum7);

		// escape
		if (num1 == 0 || num2 == 0 || num3 == 0 || num4 == 0 || num5 == 0 || num6 == 0)
			break;
	}

	return 0;
}