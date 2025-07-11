#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[8];

int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		arr[i] = i + 1;
	do {
		for (i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	} while (next_permutation(arr, arr + n));
}