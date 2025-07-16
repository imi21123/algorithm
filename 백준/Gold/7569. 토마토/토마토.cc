#include <iostream>
#include <queue>
using namespace std;

int m, n, h;
int temp_day = 0, cnt_full = 0, cnt_empty = 0, now_x, now_y, now_z, day;
int arr[100][100][100];
queue <int> q_x;
queue <int> q_y;
queue <int> q_z;
queue <int> q_day;

void bfs(int z, int y, int x) {
	if (arr[z][y][x] == 0) {
		arr[z][y][x] = 1;
		q_x.push(x);
		q_y.push(y);
		q_z.push(z);
		temp_day = day;
		q_day.push(temp_day + 1);
	}

}

int main() {
	scanf("%d %d %d", &m, &n, &h);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				scanf("%d", &arr[i][j][k]);
				if (arr[i][j][k] == 1)
					cnt_full++;
				if (arr[i][j][k] == -1)
					cnt_empty++;
			}
		}
	}
	if ((cnt_full + cnt_empty) == m * n * h) {
		printf("0");
		return 0;
	}
	if (cnt_full == 0) {
		printf("-1");
		return 0;
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (arr[i][j][k] == 1) {
					q_z.push(i);
					q_y.push(j);
					q_x.push(k);
					q_day.push(0);
				}
			}
		}
	}
	while (q_x.size() != 0) {
		now_x = q_x.front();
		now_y = q_y.front();
		now_z = q_z.front();
		day = q_day.front();

		q_x.pop();
		q_y.pop();
		q_z.pop();
		q_day.pop();

		if (now_z > 0)
			bfs(now_z - 1, now_y, now_x);
		if (now_z < h - 1)
			bfs(now_z + 1, now_y, now_x);
		if (now_y > 0)
			bfs(now_z, now_y - 1, now_x);
		if (now_y < n - 1)
			bfs(now_z, now_y + 1, now_x);
		if (now_x > 0)
			bfs(now_z, now_y, now_x - 1);
		if (now_x < m - 1)
			bfs(now_z, now_y, now_x + 1);
	}
	while (1) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < m; k++) {
					if (arr[i][j][k] == 0) {
						printf("-1");
						return 0;
					}
				}
			}
		}
		printf("%d", day);
		return 0;
	}
	return 0;
}