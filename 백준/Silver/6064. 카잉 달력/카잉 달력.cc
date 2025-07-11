#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int t, m, n, x, y;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d %d", &m, &n, &x, &y);
		x -= 1;
		y -= 1;
		bool chk = false;

		for (int k = x; k < (n * m); k += m) {
			if (k % n == y) {
				printf("%d\n", k + 1);
				chk = true;
				break;
			}
		}
		if (!chk)
			printf("-1\n");
	}
}