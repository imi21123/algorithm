#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int dp[1005];
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
	printf("%d", dp[n]);
}