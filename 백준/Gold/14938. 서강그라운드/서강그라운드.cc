#include <iostream>
#include <algorithm>
using namespace std;
int INF = 1e9;
int n, m, r, a, b, l, item;
int t[105], arr[105][105];

void floyd_warshall() {
	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (arr[i][j] > arr[i][k] + arr[k][j])
					arr[i][j] = arr[i][k] + arr[k][j];
}
int main() {
	scanf("%d %d %d", &n, &m, &r);
	for (int i = 1; i <= n; i++)
		scanf("%d", &t[i]);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i != j)
				arr[i][j] = INF;
	for (int i = 0; i < r; i++) {
		scanf("%d %d %d", &a, &b, &l);
		arr[a][b] = l;
		arr[b][a] = l;
	}
	floyd_warshall();
	
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++)
			if (arr[i][j] <= m)
				cnt += t[j];
		item = max(item, cnt);
	}
	printf("%d", item);
	return 0;
}