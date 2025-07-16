#include <iostream>
using namespace std;
int n;
int t[20], p[20], ans[20];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &t[i], &p[i]);
	for (int i = 0; i < n; i++) {
		if (ans[i] > ans[i + 1])
			ans[i + 1] = ans[i];
		if (ans[i + t[i]] < ans[i] + p[i])
			ans[i + t[i]] = ans[i] + p[i];
	}
	printf("%d", ans[n]);
}