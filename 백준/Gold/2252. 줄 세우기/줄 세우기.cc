#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int inDegree[100005];
vector <int> v[32005];

void topologySort() {
	queue <int> q;
	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0)
			q.push(i);
	}
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		cout << now << " ";
		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			if (--inDegree[next] == 0)
				q.push(next);
		}
	}
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		inDegree[b]++;
	}
	topologySort();
}