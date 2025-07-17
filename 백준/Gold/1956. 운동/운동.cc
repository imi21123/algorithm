#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 1e9;
int v, e, a, b, c;
int arr[405][405];

void Floyd_Warshall() {
	for (int k = 1; k <= v; k++)
		for (int i = 1; i <= v; i++)
			for (int j = 1; j <= v; j++)
				if (arr[i][j] > arr[i][k] + arr[k][j])
					arr[i][j] = arr[i][k] + arr[k][j];
}
int main() {
	scanf("%d %d", &v, &e);
	for (int i = 1; i <= v; i++)
		for (int j = 1; j <= v; j++)
			arr[i][j] = INF;
	for (int i = 0; i < e; i++) {
		scanf("%d %d %d", &a, &b, &c);
		arr[a][b] = c;
	}
	Floyd_Warshall();

	int chk = INF;
	for (int i = 1; i <= v; i++) 
		for (int j = 1; j <= v; j++) {
			if (i == j)
				continue;
			else
				if (arr[i][j] != INF && arr[j][i] != INF)
					chk = min(chk, arr[i][j] + arr[j][i]);
		}
	if (chk == INF)
		printf("-1");
	else printf("%d", chk);

	return 0;
}