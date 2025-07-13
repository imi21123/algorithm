#include <iostream>
#include <algorithm>
using namespace std;

int n, m, check[10], ans[10];
void go(int index, int location) {
	if (location == m) {
		for (int i = 0; i < m; i++)
			printf("%d ", ans[i]);
		printf("\n");
		return;
	}
	for (int i = index + 1; i <= n; i++) {
		if (!check[i]) {
			check[i] = 1;
			ans[location] = i;
			go(i, location + 1);
			check[i] = 0;
			ans[location] = 0;
		}
	}
	return;
}
int main() {
	scanf("%d %d", &n, &m);
	go(0, 0);
}