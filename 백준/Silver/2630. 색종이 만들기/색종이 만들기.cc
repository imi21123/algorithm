#include <iostream>
using namespace std;

int n, x, y, bcnt = 0, wcnt = 0, color = 0;
int map[130][130];

void cut(int n, int x, int y) {
	color = map[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (map[i][j] != color) {
				cut(n / 2, x, y);
				cut(n / 2, x + n / 2, y);
				cut(n / 2, x, y + n / 2);
				cut(n / 2, x + n / 2, y + n / 2);
				return;
			}
		}
	}
	if (color)
		bcnt++;
	else
		wcnt++;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &map[i][j]);
	}
	cut(n, 0, 0);
	printf("%d\n%d", wcnt, bcnt);
	return 0;
}