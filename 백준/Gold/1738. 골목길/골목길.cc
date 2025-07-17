#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
const int INF = 1e8;
typedef pair <int, int> pii;
int n, m, node[101];
bool cycle = false;

vector <int> adj[101];
bool visit[101] = { false, };
void bfs() {
	queue <int> q;
	q.push(n);
	visit[n] = true;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < adj[now].size(); i++) {
			int next = adj[now][i];
			if (!visit[next]) {
				visit[next] = true;
				q.push(next);
			}
		}
	}
}
int main() {
	priority_queue <pii, vector <pii>, greater<pii>> pq;
	long long dist[20002];
	fill(dist, dist + 20002, INF);
	vector <pii> d[20002];

	scanf("%d %d", &n, &m);
	int u, v, w;
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &u, &v, &w);
		d[u].push_back(pii(v, -w));
		adj[v].push_back(u);
	}

	bfs();

	dist[1] = 0;
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < d[i].size(); j++) {
				int nextvertex = d[i][j].first;
				int nextcost = d[i][j].second;
				if (dist[i] != INF && dist[nextvertex] > dist[i] + nextcost) {
					dist[nextvertex] = dist[i] + nextcost;
					node[nextvertex] = i;
					if (k == n && visit[nextvertex]) {
						cycle = true;
					}
				}
			}
		}
	}
	if (cycle) {
		printf("-1\n");
		return 0;
	}
	else {
		vector <int> ans;
		int idx = n;
		while (1) {
			ans.push_back(idx);
			if (idx == 1)
				break;
			else
				idx = node[idx];
		}
		for (int i = ans.size() - 1; i >= 0; i--) {
			printf("%d ", ans[i]);
		}
	}
	return 0;
}