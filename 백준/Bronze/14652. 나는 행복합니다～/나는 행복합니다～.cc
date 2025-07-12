#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	int i, j, cnt = -1;
	scanf("%d %d %d", &n, &m, &k);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			cnt++;
			if (cnt == k)
				printf("%d %d", i, j);
		}
	return 0;
}