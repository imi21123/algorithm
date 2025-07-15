#include <iostream>
using namespace std;

long long dp[1005][1005];
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	dp[0][0] = 1;
	dp[1][0] = 1;
	dp[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			dp[i][j] %= 10007;
		}
	}
	printf("%lld", dp[n][k]);
}