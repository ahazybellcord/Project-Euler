#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool is_prime(long n) {
	bool result = true;
	if (n==2) return result;
	for (long i = 2; i < (long)floor(sqrt(n)); i++) {
		if (n % i == 0) {
			result = false;
			break;
		}
	}
	return result;
}

int main(int argc, char **argv) {
	long largest_prime_factor;
	long big_num = 600851475143;
	for (long i=2; i < (long)floor(sqrt(big_num)); i++) {
		if (is_prime(i)) {
			if (big_num % i == 0) {
				largest_prime_factor = i;
			}
		}
	}
	printf("The largest prime factor of %ld is %ld\n",big_num,largest_prime_factor);


}
