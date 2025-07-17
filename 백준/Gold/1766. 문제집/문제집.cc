#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, a, b;
int inDegree[100005];
vector <int> v[32005];

void topologySort() {
	priority_queue <int, vector <int>, greater <int>> pq;
	//priority_queue는 기본 정렬이 내림차순이므로 오름차순으로 하기 위해 greater 필요 
	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0) {
			pq.push(i);
		}
	}
	while (!pq.empty()) {
		int now = pq.top();
		pq.pop();
		cout << now << " ";
		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			if (--inDegree[next] == 0)
				pq.push(next);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		inDegree[b]++;
	}
	topologySort();
}