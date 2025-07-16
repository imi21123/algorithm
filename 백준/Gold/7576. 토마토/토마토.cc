#include <iostream>
#include <queue>
using namespace std;

int map[1000][1000];
int dist[1000][1000];
const int dx[] = { 0, 0, -1, 1 };
const int dy[] = { -1, 1, 0, 0 };
queue <pair <int, int>> q;
int n, m, ans = 0;
int main() {
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
			dist[i][j] = -1;

			if (map[i][j] == 1) {
				q.push(make_pair(i, j));
				dist[i][j] = 0;
			}
		}
	}
	while (!q.empty()) {
		int cur_x = q.front().second;
		int cur_y = q.front().first;
		q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int next_x = cur_x + dx[dir];
			int next_y = cur_y + dy[dir];

			if (next_y >= 0 && next_y < n && next_x >= 0 && next_x < m ) {
				if (map[next_y][next_x] == 0 && dist[next_y][next_x] == -1) {
					map[next_y][next_x] = 1;
					dist[next_y][next_x] = dist[cur_y][cur_x] + 1;
					q.push(make_pair(next_y, next_x));
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ans < dist[i][j])
				ans = dist[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0 && dist[i][j] == -1)
				ans = -1;
		}
	}
	printf("%d", ans);
}