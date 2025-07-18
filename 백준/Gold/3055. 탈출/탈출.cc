#include <iostream>
#include <queue>
using namespace std;

int r, c, start_x, start_y, end_x, end_y, waterDay[53][53], chk[53][53];
char a[53][53];
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
queue <pair <int, int>>	q;

void water_bfs() {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_x = x + dx[i];
			int next_y = y + dy[i];

			if (next_x >= 0 && next_x < r && next_y >= 0 && next_y < c) {
				if (waterDay[next_x][next_y] == 0 && a[next_x][next_y] == '.') {
					waterDay[next_x][next_y] = waterDay[x][y] + 1;
					q.push({ next_x, next_y });
				}
			}
		}
	}
}
void bfs() {
	queue <pair <int, int>> q;
	q.push({ start_x, start_y });
	
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_x = x + dx[i];
			int next_y = y + dy[i];

			if (next_x >= 0 && next_x < r && next_y >= 0 && next_y < c) {
				if (chk[next_x][next_y] == 0 && (a[next_x][next_y] == '.' || a[next_x][next_y] == 'D')) {
					if (waterDay[next_x][next_y] == 0) {
						chk[next_x][next_y] = chk[x][y] + 1;
						q.push(make_pair(next_x, next_y));
					}
					else {
						if (waterDay[next_x][next_y] > chk[x][y] + 1) {
							chk[next_x][next_y] = chk[x][y] + 1;
							q.push(make_pair(next_x, next_y));
						}
					}
				}
			}
		}
	}
}
int main() {
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		cin >> a[i];

		for (int j = 0; j < c; j++) {
			if (a[i][j] == 'S') {
				start_x = i;
				start_y = j;
			}
			else if (a[i][j] == 'D') {
				end_x = i;
				end_y = j;
			}
			else if (a[i][j] == '*')
				q.push({ i, j });
		}
	}
	water_bfs();
	bfs();

	if (chk[end_x][end_y] != 0)
		cout << chk[end_x][end_y];
	else
		cout << "KAKTUS";

	return 0;
}