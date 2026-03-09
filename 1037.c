#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int n;
	int arr[50];
	int min = 1000000, max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		if (arr[i] <= min) min = arr[i];
		if (arr[i] >= max) max = arr[i];

	}
	int N = min * max;
	printf("%d", N);
	return 0;
}
