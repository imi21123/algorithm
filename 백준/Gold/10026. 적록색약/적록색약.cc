#include <iostream>
#include <cstring>
using namespace std;

int n, dx[4] = { -1, 1, 0, 0 }, dy[4] = { 0, 0, -1, 1 }, chk[105][105], cnt;
char arr[105][105];

void dfs(int x, int y, char c) {
	chk[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < n)
			if (arr[next_x][next_y] == c && !chk[next_x][next_y])
				dfs(next_x, next_y, c);
	}
}
void exchange() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[i][j] == 'G')
				arr[i][j] = 'R';
}
int main() {
	cin >> n;
	getchar();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
		getchar();
	}
	memset(chk, 0, sizeof(chk));
	cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!chk[i][j] && arr[i][j] == 'R') {
				dfs(i, j, 'R');
				cnt++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!chk[i][j] && arr[i][j] == 'G') {
				dfs(i, j, 'G');
				cnt++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!chk[i][j] && arr[i][j] == 'B') {
				dfs(i, j, 'B');
				cnt++;
			}
		}
	}
	cout << cnt << " ";

	memset(chk, 0, sizeof(chk));
	cnt = 0;

	exchange();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!chk[i][j] && arr[i][j] == 'R') {
				dfs(i, j, 'R');
				cnt++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!chk[i][j] && arr[i][j] == 'B') {
				dfs(i, j, 'B');
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}