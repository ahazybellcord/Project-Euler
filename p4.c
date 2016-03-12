#include <stdio.h>

/* if x is a palindrome, return x
 * else return -1
 * assuming that x is the product 
 * of two three-digit numbers
 */
int is_palindrome(int x) {
	if (x / 100000 == 0) {
		// x is five digits long
		if (((x % 100000)/10000 == x % 10) && ((x % 10000)/1000 == (x % 100)/10)) {
			return x;
		}
	}
	else { 
		// x is six digits long
		if (((x % 1000000)/100000 == x % 10) && ((x % 100000)/10000 == (x % 100)/10) && ((x % 10000)/1000 == (x % 1000)/100)) {
			return x;
		}
	}
	return -1;
}

int largest_palindrome_finder(void) {
	int largest_palindrome = 0;
	int x, y;
	for (x = 100; x < 1000; x++) {
		for (y = x; y < 1000; y++) {
			if (is_palindrome(x * y) > largest_palindrome) {
				largest_palindrome = x * y;
			}
		}	
	}
	return largest_palindrome;
}

int main(int argc, char **argv) {
	printf("The largest palindrome made from the  product of two three-digit numbers is %d\n",largest_palindrome_finder());	
}
