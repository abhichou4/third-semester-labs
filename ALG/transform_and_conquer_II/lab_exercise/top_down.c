#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void shiftUp(int* arr, int start, int end) {
	int c = end;
	while (c > start) {
		int p = c/2;
		if (arr[p] < arr[c]) {
			swap(arr+p, arr+c);
			c = p;
		}
		else return;
	}
}

void heapify(int* arr, int n) {
	int end = 1;
	while (end <= n) {
		shiftUp(arr, 1, end);
		end++;
	}
}

void heap_top_bottom(int* arr, int n) {
	for (int i=2; i<=n; i++)
		heapify(arr, i);
}


int main(void) {

	int n;
	printf("Enter length of array:\n");
	scanf("%d", &n);
	int* arr = (int*)calloc(n+1, sizeof(int));
	printf("Enter Array:\n");
	for (int i=1; i<=n; i++) scanf("%d", &arr[i]);
	heap_top_bottom(arr, n);
	printf("Max Heap:\n");
	for (int i=1; i<=n; i++) printf("%d ", arr[i]);
	printf("\n");
	return 0;
}