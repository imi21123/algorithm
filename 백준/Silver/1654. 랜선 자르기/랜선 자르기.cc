#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
long long int l[10005];
long long int cut(long long int a, long long int b) {
	long long int sum = 0, ans = 0;
	while (a <= b) {
		sum = 0;
		long long int m = (a + b) / 2;
		for (int i = 1; i <= k; i++)
			sum += l[i] / m;
		if (sum < n)
			b = m - 1;
		else {
			ans = m;
			a = m + 1;
		}
	}
	return ans;
}
int main() {
	scanf("%d %d", &k, &n);
	for (int i = 1; i <= k; i++)
		scanf("%lld", &l[i]);
	sort(l + 1, l + k + 1);
	printf("%d", cut(1, l[k]));
}