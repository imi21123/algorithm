#include <iostream>
using namespace std;

int n, m, k;
int x, y, cnt = 1, dp[20][20];
int main() {
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (cnt++ == k) {
				x = j;
				y = i;
			}
		}
	}
	dp[0][1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	}
	if (k == 0)
		printf("%d", dp[n][m]);
	else {
		int a = m - x + 1;
		int b = n - y + 1;
		printf("%d", dp[y][x] * dp[b][a]);
	}
}