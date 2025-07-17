#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
long long n, m, a, b, c;
long long dist[505];
int INF = 1e9;
typedef pair <int, int> pii;
vector <pii> d[20005];
int BellmanFord() {
	bool cycle = false;
	fill(dist, dist + 505, INF);
	dist[1] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 0; k < d[j].size(); k++) {
				int next_vertex = d[j][k].first;
				int next_cost = d[j][k].second;
				if (dist[j] != INF && dist[next_vertex] > dist[j] + next_cost) {
					dist[next_vertex] = dist[j] + next_cost;
					if (i == n)
						cycle = true;
				}
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (cycle) {
			printf("-1\n");
			return 0;
		}
		else {
			if (dist[i] >= INF)
				printf("-1\n");
			else
				printf("%d\n", dist[i]);
		}
	}
	return 0;
}
int main() {
	scanf("%lld %lld", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%lld %lld %lld", &a, &b, &c);
		d[a].push_back(pii(b, c));
	}
	BellmanFord();
}