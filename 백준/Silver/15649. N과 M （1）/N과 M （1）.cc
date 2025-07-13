#include <iostream>
#include <algorithm>
using namespace std;

int n, m, check[10], ans[10];
void go(int location, int n) {
	if (location == m) {
		for (int i = 0; i < m; i++)
			printf("%d ", ans[i]);
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			check[i] = 1;
			ans[location] = i;
			go(location + 1, n);
			check[i] = 0;
			ans[location] = 0;
		}
	}
	return;
}
int main() {
	scanf("%d %d", &n, &m);
	go(0, n);
}