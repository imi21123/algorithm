#include <iostream>
#include <algorithm>
using namespace std;

int n, m, check[10], ans[10], num[10];
void go(int location, int index) {
	if (location == m) {
		for (int i = 0; i < m; i++)
			printf("%d ", ans[i]);
		printf("\n");
		return;
	}
	for (int i = index; i < n; i++) {
		ans[location] = num[i];
		go(location + 1, i);
	}
	return;
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	sort(num, num + n);
	go(0, 0);
}