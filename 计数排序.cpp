#include<bits/stdc++.h>
using namespace std;

int arr[1000005];

void Counting_Sort() {
	int n, q;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> q;
		arr[q]++;
	}
	for (int i = 1; i < 100005; i++)
	{
		if (arr[i] != 0) {
			cout << i << " ";
		}
	}
}
int main() {
	Counting_Sort();
	return 0;
}
