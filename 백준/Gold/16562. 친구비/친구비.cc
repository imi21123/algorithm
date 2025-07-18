#include <iostream>
using namespace std;

int n, m, k;
int parent[10005], cost[10005];
bool chk[10005];

int find(int x) {
	if (parent[x] == x)
		return x;
	else
		return parent[x] = find(parent[x]);
}
void merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b)
		return;
	else if (cost[a] > cost[b])
		parent[a] = b;
	else
		parent[b] = a;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++) {
		cin >> cost[i];
		parent[i] = i;
	}

	int v, w;
	for (int i = 1; i <= m; i++) {
		cin >> v >> w;
		merge(v, w);
	}
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		int root = find(i);
		if (!chk[root]) {
			k -= cost[root];
			if (k < 0) {
				cout << "Oh no";
				return 0;
			}
			chk[root] = true;
			sum += cost[root];
		}
	}
	cout << sum;
}