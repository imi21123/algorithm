#include <iostream>
using namespace std;

int n;
int map[65][65];

void tree(int n, int x, int y) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (map[i][j] != map[x][y]) {
				printf("(");
				tree(n / 2, x, y);
				tree(n / 2, x, y + n / 2);
				tree(n / 2, x + n / 2, y);
				tree(n / 2, x + n / 2, y + n / 2);
				printf(")");
				return;
			}
		}
	}
	if (map[x][y])
		printf("1");
	else
		printf("0");
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%1d", &map[i][j]);
	}
	tree(n, 0, 0);
	return 0;
}