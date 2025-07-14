#include <iostream>
using namespace std;

int main() {
	int t;
	long long n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lld", &n);

		long long left = 1, right = 1e9, mid, ans = 0;
		while (left <= right) {
			mid = (left + right) / 2;
			if (mid * (mid + 1) / 2 <= n) {
				ans = mid;
				left = mid + 1;
			}
			else
				right = mid - 1;
		}
		printf("%lld\n", ans);
	}
}