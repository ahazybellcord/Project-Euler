#include <stdio.h>

/* This one is stupidly simple
 * Just figure out the highest power of each
 * prime occuring in 2 through 20
 * We need the 4th power of 2 (due to 8)
 * and square of 3 (due to 9)
 * Otherwise just multiply the remaining
 * primes together
 */
int main(int argc, char **argv) {
	int smallest = 2*2*2*2*3*3*5*7*11*13*17*19;
	printf("The smallest positive number evenly divisible by all numbers from 1 to 20 is %d\n",smallest);
	
	return 0;
}
