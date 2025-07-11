#include <iostream>
using namespace std;

int dp[305][305];
int main() {
	int n, m, num, k, i, j, x, y;
	scanf("%d %d", &n, &m);
	for (int a = 1; a <= n; a++) {
		for (int b = 1; b <= m; b++) {
			scanf("%d", &num);
			dp[a][b] = dp[a - 1][b] + dp[a][b - 1] - dp[a - 1][b - 1] + num;
		}
	}
	scanf("%d", &k);
	for (int c = 0; c < k; c++) {
		scanf("%d %d %d %d", &i, &j, &x, &y);
		printf("%d\n", dp[x][y] - dp[x][j - 1] - dp[i - 1][y] + dp[i - 1][j - 1]);
	}
}