#include <iostream>
using namespace std;
const int INF = 1e9;
int n, m;
int arr[205][205], chk[205][205];

void Floyd_Warshall() {
	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) 
				if (arr[i][j] > arr[i][k] + arr[k][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
					chk[i][j] = chk[i][k];
				}
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			arr[i][j] = INF;
	for (int i = 0; i < m; i++) {
		int start, arrival, time;
		scanf("%d %d %d", &start, &arrival, &time);
		arr[start][arrival] = time;
		arr[arrival][start] = time;
		chk[start][arrival] = arrival;
		chk[arrival][start] = start;
	}
	Floyd_Warshall();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j)
				printf("- ");
			else
				printf("%d ", chk[i][j]);
		}
		printf("\n");
	}
	return 0;
}