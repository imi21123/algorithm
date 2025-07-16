#include <iostream>
#include <vector>
using namespace std;

int k, v, e;
int color[20005];
vector <int> arr[200005];
bool dfs(int node, int c) {
	color[node] = c;
	for (int i = 0; i < arr[node].size(); i++) {
		int next = arr[node][i];
		if (color[next] == 0) {
			if (!dfs(next, 3 - c))
				return false;
		}
		else if (color[next] == color[node])
			return false;
	}
	return true;
}
int main() {
	scanf("%d", &k);
	while (k--) {
		scanf("%d %d", &v, &e);
		for (int i = 0; i <= v; i++) {
			arr[i].clear();
			color[i] = 0;
		}
		for (int i = 0; i < e; i++) {
			int x, y;
			scanf("%d %d", &x, &y);
			arr[x].push_back(y);
			arr[y].push_back(x);
		}
		bool ok = true;
		for (int i = 0; i < v; i++) {
			if (color[i] == 0) {
				if (!dfs(i, 1)) {
					ok = false;
					break;
				}
			}
		}
		if (ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}