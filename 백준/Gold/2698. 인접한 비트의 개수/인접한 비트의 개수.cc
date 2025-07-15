#include <iostream>
using namespace std;

int dp[105][105][2];
int main() {
	int t, n, k;
	scanf("%d", &t);
	dp[1][0][0] = 1;
	dp[1][0][1] = 1;
	for (int i = 2; i <= 100; i++) {
		for (int j = 0; j < i; j++) {
			dp[i][j][0] = dp[i - 1][j][0] + dp[i - 1][j][1];
			dp[i][j][1] = dp[i - 1][j][0] + dp[i - 1][j - 1][1];
		}
	}
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &k);
		printf("%d\n", dp[n][k][0] + dp[n][k][1]);
	}
}