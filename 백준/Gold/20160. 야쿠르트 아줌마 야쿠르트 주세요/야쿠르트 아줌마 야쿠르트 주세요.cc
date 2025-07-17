#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
typedef pair <ll, ll> pll;
ll V, E, u, v, w;
vector <vector <pll>> edge;
const ll INF = 1e15;

vector <ll> dijkstra(ll prev, ll node) {
	vector <ll> dist(V + 1, INF);
	dist[node] = prev;
	priority_queue <pll> pq;
	pq.push({ -dist[node], node });
	while (!pq.empty()) {
		ll cost = -pq.top().first;
		ll here = pq.top().second;
		pq.pop();
		if (dist[here] < cost)
			continue;
		for (int i = 0; i < edge[here].size(); i++) {
			ll next = edge[here][i].first;
			ll nextcost = edge[here][i].second;
			if (dist[next] > dist[here] + nextcost) {
				dist[next] = dist[here] + nextcost;
				pq.push({ -dist[next], next });
			}
		}
	}
	return dist;
}
int main() {
	cin >> V >> E;
	edge.resize(V + 1);
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		edge[u].push_back({ v, w });
		edge[v].push_back({ u, w });
	}
	pll node[10] = { {0, 0}, };
	ll prev_dist, prev_node;
	for (int i = 0; i < 10; i++) {
		cin >> node[i].first;
		if (!i) {
			prev_dist = 0, prev_node = node[i].first;
			continue;
		}
		vector <ll> dist = dijkstra(prev_dist, prev_node);
		if (dist[node[i].first] != INF)
			prev_dist = dist[node[i].first], prev_node = node[i].first;
		node[i].second = dist[node[i].first];
	}
	ll start, ansnode = V + 1;
	cin >> start;
	vector <ll> ansdist = dijkstra(0, start);
	for (int i = 0; i < 10; i++) {
		if (node[i].second == INF)
			continue;
		if (node[i].second >= ansdist[node[i].first])
			ansnode = min(ansnode, node[i].first);
	}
	if (ansnode == V + 1)
		printf("-1");
	else
		cout << ansnode;
}