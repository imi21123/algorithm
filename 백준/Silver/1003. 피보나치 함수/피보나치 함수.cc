#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t, n;
	pair <int, int> num[45];
	num[0] = { 1, 0 };
	num[1] = { 0, 1 };
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		for (int j = 2; j <= n; j++)
			num[j] = { num[j - 1].first + num[j - 2].first, num[j - 1].second + num[j - 2].second };
		printf("%d %d\n", num[n].first, num[n].second);
	}
}