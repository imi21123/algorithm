#include <iostream>
#include <algorithm>
using namespace std;

int h[9];
int sum = 0;

int main() {
	int i, j, k;
	for (i = 0; i < 9; i++) {
		scanf("%d", &h[i]);
		sum += h[i];
	}
	sort(h, h + 9);
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (sum - h[i] - h[j] == 100) {
				for (k = 0; k < 9; k++) {
					if (k == i || k == j)
						continue;
					else
						printf("%d\n", h[k]);
				}
				return 0;
			}
		}
	}
	return 0;
}