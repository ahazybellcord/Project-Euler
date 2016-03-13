#include <stdio.h>

/* if x is divisible by 3 or 5 return x
 * else return 0
 */
int is_divisible_by_3_or_5(int x) {
	if (x % 3 == 0 || x % 5 == 0) {
		return x;
	}
	else return 0;
}

int main(int argc, char **argv) {
	int sum = 0;
	for (int i = 1; i < 1000; i++) {
		sum += is_divisible_by_3_or_5(i);
	}
	printf("The sum of numbers below 1000 which are multiples of 3 or 5 is %d\n",sum);

	return 0;
}
