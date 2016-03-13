#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv) {
	int primes[10001];
	int index = 0;
	primes[index++] = 2;
	
	int x = 3;
	bool is_prime;
	while (index < 10001) {
		is_prime = true;
		for (int k = 0; k < index; k++) {
			if (x % primes[k] == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			primes[index++] = x;
		}
		x++;
	}
	printf("The 10,001st prime is %d\n",primes[10000]);

	return 0;

}
