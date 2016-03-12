#include <stdio.h>

int fibonacci(int n) {
	if (n == 1 || n == 2) return 1;
	else return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char **argv) {
// figure out how many terms in fibonacci sequence before we hit 4M
	int result = 0;
	int index = 1;
	while (result < 4000000) {
		result = fibonacci(index);
		index++;
	}
	
	int sum = 0;
	for (int i = 1; i <= index; i++) {
		result = fibonacci(i);
		if (result % 2 == 0) {
			sum += result;
		}
	}
	printf("Sum of even terms up to 4000000 is: %d\n",sum);

}
