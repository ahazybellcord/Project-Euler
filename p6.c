#include <stdio.h>

/* Sum up numbers 1 through end */
int consecutive_sum(int end) {
	return end*(end+1)/2;
}

/* Sum up squares from start to end */
int sum_of_squares(int start, int end) {
	int sum = 0;
	for (int i = start; i <= end; i++) {
		sum += i*i;
	}
	return sum;
}

int main(int argc, char **argv) {
	int result = (consecutive_sum(100) * consecutive_sum(100)) - sum_of_squares(1,100);
	printf("The difference between the sum of the squares of the first hundred numbers and the square of the sum is %d\n",result);
	return 0;
}
