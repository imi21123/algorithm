#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;

int tc, n, k, x, y, w;
int inDegree[100005], t[1005],  ans[1005];
vector <int> v[1005];

void topologySort() {
	queue <int> q;
	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0) {
			ans[i] = t[i];
			q.push(i);
		}
	}
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			ans[next] = max(ans[next], ans[now] + t[next]);
			if (--inDegree[next] == 0)
				q.push(next);
		}
	}
	cout << ans[w] << "\n";
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> tc;
	while (tc--) {
		memset(inDegree, 0, sizeof(inDegree));
		memset(t, 0, sizeof(t));
		memset(ans, 0, sizeof(ans));
		memset(v, 0, sizeof(v));
		cin >> n >> k;
		for (int i = 1; i <= n; i++) 
			cin >> t[i];
		while (k--) {
			cin >> x >> y;
			v[x].push_back(y);
			inDegree[y]++;
		}
		cin >> w;
		topologySort();
	}
}