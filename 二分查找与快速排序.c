#include<stdio.h>

int binarySearch(int arr[], int len, int num);
void quicksort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

int main() {
	int arr[10005];
	int len;
	int num;

	// 读取数组长度（这里假设用户会输入一个有效的长度）
	scanf_s("%d", &len);
	if (len > 10005) {
		len = 10005; // 防止数组越界
	}

	// 读取数组元素（这里假设用户会输入正确数量的整数）
	for (int i = 0; i < len; i++) {
		scanf_s("%d", &arr[i]);
	}

	// 读取要查找的数字
	scanf_s("%d", &num);

	// 对数组进行排序
	quicksort(arr, 0, len - 1);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
		printf("\n");
	}

	// 使用二分查找查找数字
	int index = binarySearch(arr, len, num);
	if (index != -1) {
		printf("数字 %d 在数组中的索引为: %d\n", num, index);
	}
	else {
		printf("数组中未找到数字 %d\n", num);
	}

	return 0;
}
//二分查找
int binarySearch(int arr[],int len,int num) {
	int min = 0;
	int max = len - 1;
	while (min <= max) {
		int mid = (min + max) / 2;
		if (arr[mid] < num) {
			min = mid + 1;
		}
		else if (arr[mid] > num) {
			max = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
//快速排序
void quicksort(int arr[], int low, int high) {
	if (low < high) {
		int pivotpos = partition(arr, low, high);
		quicksort(arr, low, pivotpos - 1);
		quicksort(arr,pivotpos + 1, high);
	}
}
//划分函数
int partition(int arr[], int low, int high) {
	int pivot = arr[low];
	while(low < high) {
		while (low < high && arr[high] >= pivot) {
			high--;
		}
		arr[low] = arr[high];
		while (low < high && arr[low] <= pivot) {
			low++;
		}
		arr[high] = arr[low];
		arr[low] = pivot;
		return low;
	}
}
