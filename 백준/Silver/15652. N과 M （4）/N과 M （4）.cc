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
	for (int i = index; i <= n; i++) {
			ans[location] = i;
			go(i, location + 1);
		}
	}
int main() {
	scanf("%d %d", &n, &m);
	go(1, 0);
	return 0;
}