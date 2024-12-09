#include<stdio.h>
int nextCollatz(int n) {
	if (n % 2 == 0) {
		return n / 2;
	}
	else {
		return n * 3 + 1;
	}
}
void printCollatzSequence(int n) {
	if (n == 1) {
		printf("1");
		return;
	}
	printCollatzSequence(nextCollatz(n));
	printf(" %d", n);
}
int main() {
	int n;
	scanf_s("%d", &n);
	printCollatzSequence(n);
	return 0;
}
