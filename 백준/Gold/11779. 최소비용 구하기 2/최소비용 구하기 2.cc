#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int n, m, s, e;
int INF = 1e9;
typedef pair <int, int> pii;
vector <int> dist(n + 1, INF);
vector <vector <pii>> line;

vector <int> findpath(vector <int> path) {
	vector <int> ans;
	int current = e;
	while (current) {
		ans.push_back(current);
		current = path[current];
	}
	return ans;
}
void dijkstra() {
	vector <int> path(n + 1);
	dist.resize(n + 1, INF);
	dist[s] = 0;
	priority_queue <pii> pq;
	pq.push({ 0, s });
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
				path[next] = current;
				pq.push({ -dist[next], next });
			}
		}
	}
	cout << dist[e] << "\n";
	vector <int> ans = findpath(path);
	cout << ans.size() << "\n";
	for (int i = ans.size() - 1; i >= 0; i--)
		cout << ans[i] << " ";
}
int main() {
	cin >> n >> m;
	line.resize(n + 1);
	for (int i = 0; i < m; i++) {
		int a, b, p;
		cin >> a >> b >> p;
		line[a].push_back({ b, p });
	}
	cin >> s >> e;
	dijkstra();
}