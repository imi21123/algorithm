#include <iostream>
using namespace std;

int n, m;
int parent[205];

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
	else
		parent[b] = a;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;

	for (int i = 0; i <= n; i++)
		parent[i] = i;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int sign;
			cin >> sign;
			if (sign == 1)
				merge(i, j);
		}
	}
	int city[1005];
	bool chk = true;
	for (int i = 0; i < m; i++)
		cin >> city[i];
	for (int i = 0; i < m - 1; i++) {
		if (find(city[i]) != find(city[i + 1]))
			chk = false;
	}
	chk ? printf("YES") : printf("NO");
}