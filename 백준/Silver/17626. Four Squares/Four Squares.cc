#include <iostream>
#include <algorithm>
using namespace std;

int dp[50005];
int main() {
	int n, ans;
	scanf("%d", &n);
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int tmp = 1e9;
		for (int j = 1; j < 250; j++) {
			if (j * j > i)
				break;
			tmp = min(tmp, dp[i - j * j]);
		}
		dp[i] = tmp + 1;
	}
	printf("%d", dp[n]);
	return 0;
}