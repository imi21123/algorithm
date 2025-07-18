#include <iostream>
#include <queue>
using namespace std;

int v, e, a, b, c;
int mst_cost = 0;
int parent[10005];
priority_queue<pair <int, pair<int, int>>> pq;

int find(int x) {
	if (parent[x] == x)
		return x;
	else
		return parent[x] = find(parent[x]);
}
void merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b)
		return;
	parent[b] = a;
}
void kruskal() {
	while (!pq.empty()) {
		int a = find(pq.top().second.first);
		int b = find(pq.top().second.second);
		int cost = -pq.top().first;
		pq.pop();

		if (a == b)
			continue;
		merge(a, b);
		mst_cost += cost;
	}
}
int main() {
	cin >> v >> e;

	for (int i = 0; i < v; i++)
		parent[i] = i;

	for (int i = 0; i < e; i++) {
		cin >> a >> b >> c;
		pq.push({ -c, {a, b} });
	}
	kruskal();
	cout << mst_cost;
}