#include <iostream>
using namespace std;
int t, n, m, k, cnt = 0, a, b;
int map[55][55] = { 0, };
int chk[55][55] = { 0, };
int rx[4] = { 1, -1, 0, 0 };
int ry[4] = { 0, 0, 1, -1 };
void dfs(int y, int x) {
	chk[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + ry[i];
		int ny = y + rx[i];
		if (map[ny][nx] == 1 && ny >= 0 && ny < n && nx >= 0 && nx < m) {
			if (!chk[ny][nx]) {
				chk[ny][nx] = 1;
				dfs(ny, nx);
			}
		}
	}
}
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d", &n, &m, &k);
		while (k--) {
			scanf("%d %d", &a, &b);
			map[a][b] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (map[i][j] == 1 && !chk[i][j]) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
		if (n != 1) {
			cnt = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					map[i][j] = 0;
					chk[i][j] = 0;
				}
			}
		}
	}
	return 0;
}