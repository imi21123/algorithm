#include <iostream>
#include <algorithm>
using namespace std;

int n, m, check[10], ans[10], num[10];
void go(int location) {
	if (location == m) {
		for (int i = 0; i < m; i++)
			printf("%d ", ans[i]);
		printf("\n");
		return;
	}
	int prev = 0;
	for (int i = 0; i < n; i++) {
		if (prev != num[i] && check[i] == 0) {
			ans[location] = num[i];
			prev = ans[location];
			check[i] = 1;
			go(location + 1);
			check[i] = 0;
		}
	}
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	sort(num, num + n);
	go(0);
}