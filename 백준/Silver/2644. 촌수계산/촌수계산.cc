#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n, m, v, a, b, p1, p2, ans = 0;
int vst[1005];
int arr[105][105];
vector <int> adj[1005];
queue <int> q;
void bfs(int st) {
	vst[st] = 0;
	q.push(st);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (now == p2)
			break;
		for (int i = 0; i < adj[now].size(); i++) {
			int next = adj[now][i];
			if (!vst[next]) {
				vst[next] = vst[now] + 1;
				q.push(next);
			}
		}
	}
	if (vst[p2] != 0)
		printf("%d\n", vst[p2]);
	else
		printf("-1\n");
}
int main() {
	scanf("%d", &n);
	scanf("%d %d", &p1, &p2);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	bfs(p1);
	return 0;
}