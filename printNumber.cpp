#include <stdio.h>
#include <stdlib.h>

using namespace std;

void printNumber(int num);
int main() {
	printNumber(15);
	return 0;
}

void printNumber(int num) {
	int count = 0;
	for (int i = 1; i <= num; i++) {
		if (i % 15 == 0 || (i % 3 != 0 && i % 5 != 0)) {
			count ++;
			// printf("%d ", i);
		}
	}
	printf("%d\n", count);
}
