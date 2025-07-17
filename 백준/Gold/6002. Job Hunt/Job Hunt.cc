#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int INF = 1e9;
long long D, P, C, F, S;
bool check = false;
typedef pair <int, int> pii;
int main() {
	priority_queue <pii, vector <pii>, greater <pii>> pq;
	long long dist[250];
	fill(dist, dist + 250, INF);
	vector <pii> d[250];

	scanf("%lld %lld %lld %lld %lld", &D, &P, &C, &F, &S);
	long long a, b, j, k, t;
	for (int i = 0; i < P; i++) {
		scanf("%lld %lld", &a, &b);
		d[a].push_back({ b, -D });
	}
	for (int i = 0; i < F; i++) {
		scanf("%lld %lld %lld", &j, &k, &t);
		d[j].push_back({ k, -(D - t) });
	}
	dist[S] = -D;
	long long ans = -D;
	for (int k = 1; k <= C; k++) {
		for (int i = 1; i <= C; i++) {
			for (int j = 0; j < d[i].size(); j++) {
				long long nextvertex = d[i][j].first;
				long long nextcost = d[i][j].second;
				if (dist[i] != INF && dist[nextvertex] > dist[i] + nextcost) {
					dist[nextvertex] = dist[i] + nextcost;
					ans = min(ans, dist[nextvertex]);
					if (k == C)
						check = true;
				}
			}
		}
	}
	if (check) {
		printf("-1\n");
		return 0;
	}
	else
		printf("%lld", -ans);
	return 0;
}