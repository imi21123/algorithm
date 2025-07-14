#include <iostream>
using namespace std;

int n;
int map[2190][2190];
int zcnt = 0, pcnt = 0, mcnt = 0;

void cut(int n, int x, int y) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (map[x][y] != map[i][j]) {
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++)
						cut(n / 3, x + (n / 3) * i, y + (n / 3) * j);
				}
				return;
			}
		}
	}
	if (map[x][y] == 1)
		pcnt++;
	else if (map[x][y] == 0)
		zcnt++;
	else
		mcnt++;
	return;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &map[j][i]);
	}
	cut(n, 0, 0);
	printf("%d\n%d\n%d", mcnt, zcnt, pcnt);
	return 0;
}