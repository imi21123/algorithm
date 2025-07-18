#include <iostream>
#include <vector>
using namespace std;

int n, del;
int parent[55], visited[55];
vector <int> edge[55];

void dfs(int now) {
	visited[now] = true;
	for (int i = 0; i < edge[now].size(); i++)
		dfs(edge[now][i]);
	return;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> parent[i];
		edge[parent[i]].push_back(i);
	}

	cin >> del;
	dfs(del);
	if (parent[del] != -1)
		edge[parent[del]].pop_back();

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (edge[i].size() == 0 && !visited[i])
			ans++;
	}
	cout << ans;
}