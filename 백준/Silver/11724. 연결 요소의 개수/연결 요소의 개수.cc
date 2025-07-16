#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, v, a, b, ans = 0;
int visit[1005];
vector <int> adj[1005];
queue <int> q;
void bfs(int st) {
	visit[st] = 1;
	q.push(st);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < adj[now].size(); i++) {
			int next = adj[now][i];
			if (!visit[next]) {
				visit[next] = 1;
				q.push(next);
			}
		}
	}
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < n; i++)
		sort(adj[i].begin(), adj[i].end());
	for (int i = 1; i <= n; i++) {
		if (visit[i] == 0) {
			bfs(i);
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}