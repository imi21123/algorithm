#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int t;
int n, d, c;
int a, b, s;
vector <pair <int, int>> line[10001];

void dijkstra(int start) {
	vector <int> dist(n + 1, 1e9);
	dist[start] = 0;
	priority_queue <pair <int, int>> pq;
	pq.push({ 0, start });
	while (!pq.empty()) {
		int cost = -pq.top().first;
		int current = pq.top().second;
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
	int cnt = 0, maximum = 0;
	for (int i = 1; i <= n; i++) {
		if (dist[i] != 1e9) {
			cnt++;
			maximum = max(maximum, dist[i]);
		}
	}
	printf("%d %d\n", cnt, maximum);
}
int main() {
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &n, &d, &c);
		for (int j = 0; j < d; j++) {
			scanf("%d %d %d", &a, &b, &s);
			line[b].push_back({ a, s });
		}
		dijkstra(c);
		for (int j = 0; j <= 10000; j++)
			line[j].clear();
	}
}