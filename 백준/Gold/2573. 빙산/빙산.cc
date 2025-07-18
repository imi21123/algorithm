#include <iostream>
#include <cstring>
using namespace std;

int n, m, arr[300][300], dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
bool visit[300][300];

void dfs(int x, int y) {
	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x < 1 || next_x >= n - 1 || next_y < 1 || next_y >= m - 1)
			continue;
		if (arr[next_x][next_y] > 0 && !visit[next_x][next_y])
			dfs(next_x, next_y);
	}
}
void melt() {
	int copy_arr[300][300];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			copy_arr[i][j] = arr[i][j];

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			int cnt = 0;

			if (copy_arr[i][j] > 0) {
				for (int k = 0; k < 4; k++) {
					int next_x = i + dx[k];
					int next_y = j + dy[k];

					if (copy_arr[next_x][next_y] == 0)
						cnt++;
				}
				arr[i][j] -= cnt;
				if (arr[i][j] < 0)
					arr[i][j] = 0;
			}
		}
	}
}
int main() {
	int year = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	while (true) {
		int island_cnt = 0;
		bool chk = false;
		memset(visit, false, sizeof(visit));

		for (int i = 1; i < n - 1; i++) {
			for (int j = 1; j < m - 1; j++) {
				if (arr[i][j] > 0 && !visit[i][j]) {
					island_cnt++;
					if (island_cnt == 2) {
						chk = true;
						break;
					}
					dfs(i, j);
				}
			}
		}
		if (chk)
			break;
		if (island_cnt == 0) {
			cout << "0";
			return 0;
		}
		melt();
		year++;
	}
	cout << year;
	return 0;
}