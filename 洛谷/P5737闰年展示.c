#include<stdio.h>
int main()
{	
	int x, y, number = 0;
	scanf_s("%d %d", &x, &y);
	for (int i = x; i <= y; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 ==0)){
			int year = i;
			number++;
		
		}
	}
	printf("%d\n", number);
	for (int i = x; i <= y; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
			int year = i;
			number++;
			printf("%d ", i);
		}
	}


	return 0;
}