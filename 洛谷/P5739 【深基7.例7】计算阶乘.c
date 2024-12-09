#include<stdio.h>
int fact(int n) {
	if (n == 1) return 1;
	return fact(n - 1) * n;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fact(n));
	return 0;

}