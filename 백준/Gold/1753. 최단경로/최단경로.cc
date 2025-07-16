#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, e, k, u, v, w;
int INF = 1e9;
typedef pair <int, int> pii;
vector <int> dist;
vector <vector <pii>> line; //간선 정보

void dijkstra() {
	dist.resize(n + 1, INF);
	dist[k] = 0;
	priority_queue <pii> pq;
	pq.push({ 0, k });
	while (!pq.empty()) {
		int current = pq.top().second;
		int cost = -pq.top().first;
		pq.pop();
		if (dist[current] < cost)
			continue;
		for (int i = 0; i < line[current].size(); i++) {
			int next = line[current][i].first;
			int nextcost = cost + line[current][i].second;
			if (nextcost < dist[next]) {
				dist[next] = nextcost;
				pq.push({ -dist[next], next });
			}
		}
	}
}
int main() {
	cin >> n >> e >> k;
	line.resize(n + 1);
	for (int i = 0; i < e; i++) {
		cin >> u >> v >> w;
		line[u].push_back({ v, w });
	}
	dijkstra();
	for (int i = 1; i <= n; i++) {
		if (dist[i] == INF)
			cout << "INF\n";
		else
			cout << dist[i] << "\n";
	}
}