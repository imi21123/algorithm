#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, c;
	scanf("%d %d", &n, &c);
	vector <int> house(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &house[i]);
	sort(house.begin(), house.end());

	int left = 1, right = house[n - 1], mid, ans = 0;
	while (left <= right) {
		int cnt = 1;
		mid = (left + right) / 2;
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (house[i] - house[j] >= mid) {
				j = i;
				cnt++;
			}
		}
		if (cnt >= c) {
			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	printf("%d", ans);
	return 0;
}