#include <iostream>
#include <vector>
using namespace std;

int t, n, x, y, r;
int parent[3005];

typedef struct {
	int x, y, r;
}lct;
lct a;

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
		parent[a] = b;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) {
		vector <lct> v;
		cin >> n;
		for (int i = 0; i < n; i++) {
			parent[i] = i;
			cin >> a.x >> a.y >> a.r;
			v.push_back(a);
		}
		int ans = n;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				int x1 = v[i].x;
				int y1 = v[i].y;
				int r1 = v[i].r;
				int x2 = v[j].x;
				int y2 = v[j].y;
				int r2 = v[j].r;
				long long d1 = (r1 + r2) * (r1 + r2);
				long long d2 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
				if (d1 >= d2 && find(i) != find(j)) {
					merge(i, j);
					ans--;
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}