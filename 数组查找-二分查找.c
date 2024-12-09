#include<stdio.h>

int binarySearch(int arr[],int len,int num) {
	int min = 0, max = len - 1;
	while (min <= max) {
		int mid = (min + max) / 2;
		if (arr[mid] < num) {
			//要查找的数据在右边
			min = mid + 1;
		}
		else if(arr[mid]>num){
			//要查找的数据在左边
			max = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;

}

int main() {
	int arr[] = { 7,23,79,81,103,127,131,147 };
	int len = sizeof(arr) / sizeof(int);
	int num = 131;
	int index = binarySearch(arr, len, num);
	printf("%d", index);
	return 0;
}
