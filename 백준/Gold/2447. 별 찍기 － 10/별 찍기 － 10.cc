#include <iostream>
using namespace std;

int n;
char arr[6600][6600];

void star(int n, int x, int y) {
	if ((y / n) % 3 == 1 && (x / n) % 3 == 1)
		printf(" ");
	else {
		if (n / 3 == 0)
			printf("*");
		else
			star(n / 3, x, y);
	}
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			star(n, i, j);
		printf("\n");
	}
}