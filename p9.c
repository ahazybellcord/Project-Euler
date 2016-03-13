#include <stdio.h>

int main(int argc, char **argv) {
	int a,b,c;
	int product;
	/* An awful brute-force search but does the trick */
	for (a = 1; a < 999; a++) {
		for (b = a + 1; b < 999; b++) {
			for (c = b + 1; c < 999; c++) {
				if ((a*a + b*b - c*c == 0) && (a + b + c == 1000)) {
					product = a * b *c;
					break;
				}
			}
		}
	}

	printf("The product of a, b, and c where (a,b,c) is the pythagorean triplet such that a + b + c = 1000 is %d\n",product);
	return 0;
}
