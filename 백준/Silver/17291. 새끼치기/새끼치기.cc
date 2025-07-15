#include <iostream>
using namespace std;

pair <int, int> dp[25];
int main() {
	int n;
	scanf("%d", &n);
	dp[1] = { 1, 1 };
	dp[2] = { 1, 2 };
	dp[3] = { 2, 4 };
	for (int i = 4; i <= n; i++) {
		if (i % 2 == 0) {
			int dead = dp[i - 3].first + dp[i - 4].first;
			dp[i] = { dp[i - 1].second, dp[i - 1].second * 2 - dead };
		}
		else
			dp[i] = { dp[i - 1].second, dp[i - 1].second * 2 };
	}
	printf("%d", dp[n].second);
}