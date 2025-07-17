#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int inDegree[100005], t[505],  ans[505];
vector <int> v[505];

void topologySort() {
	queue <int> q;
	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0) {
			ans[i] = t[i];
			q.push(i);
		}
	}
	for (int i = 1; i <= n; i++) {
		int now = q.front();
		q.pop();
		for (int j = 0; j < v[now].size(); j++) {
			int next = v[now][j];
			ans[next] = max(ans[next], ans[now] + t[next]);
			if (--inDegree[next] == 0)
				q.push(next);
		}
	}
	for (int i = 1; i <= n; i++)
		cout << ans[i] << "\n";
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
		while (true) {
			int x;
			cin >> x;
			if (x == -1)
				break;
			inDegree[i]++;
			v[x].push_back(i);
		}
	}
	topologySort();
}