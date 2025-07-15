#include <iostream>
#include <queue>
using namespace std;

int n, k;
queue <int> q, ans;
int main() {
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++)
		q.push(i);
	int cnt = 1;
	while (!q.empty()) {
		if (cnt < k) {
			cnt++;
			q.push(q.front());
		}
		else {
			cnt = 1;
			ans.push(q.front());
		}
		q.pop();
	}
	printf("<");
	while (!ans.empty()) {
		printf("%d", ans.front());
		ans.pop();
		if (!ans.empty())
			printf(", ");
	}
	printf(">");
}