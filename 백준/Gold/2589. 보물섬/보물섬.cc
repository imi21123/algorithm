#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n, m, ans = 0;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
char map[55][55];
int dist[55][55];
queue <pair <int, int>> q;
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> map[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 'W')
				continue;
			q.push(make_pair(i, j));
			memset(dist, 0, sizeof(dist));
			while (!q.empty()) {
				int a = q.front().first;
				int b = q.front().second;
				q.pop();
				for (int k = 0; k < 4; k++) {
					int x = a + dx[k];
					int y = b + dy[k];
					if (x < 0 || y < 0 || x >= n || y >= m || map[x][y] == 'W' || (x == i && y == j))
						continue;
					if (!dist[x][y] || dist[x][y] > dist[a][b] + 1) {
						dist[x][y] = dist[a][b] + 1;
						q.push(make_pair(x, y));
					}
				}
			}
			for (int a = 0; a < n; a++) {
				for (int b = 0; b < m; b++) {
					if (dist[a][b])
						ans = max(ans, dist[a][b]);
				}
			}
		}
	}
	printf("%d", ans);
	return 0;
}