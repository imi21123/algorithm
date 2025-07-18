#include <iostream>
using namespace std;

int n, m;
int parent[500000];

int find(int x) {
	if (parent[x] == x)
		return x;
	else
		return parent[x] = find(parent[x]);
}
bool merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b)
		return false;
	else {
		parent[b] = a;
		return true;
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		parent[i] = i;

	int ans = 0;
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;

		if (!merge(a, b)) {
			ans = i;
			break;
		}
	}
	cout << ans;
}