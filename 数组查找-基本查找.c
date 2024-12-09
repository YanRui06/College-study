#include<stdio.h>
int order(int arr[],int len,int num) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num) {
			return i;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 11,22,33,44,55,66 };
	int len = sizeof(arr) / sizeof(int);
	int num = 55;
	int index = order(arr, len, num);
	printf("%d", index);
	return 0;
}
