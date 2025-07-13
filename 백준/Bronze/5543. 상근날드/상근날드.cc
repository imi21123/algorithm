#include <iostream>
using namespace std;

int main() {
	int s, j, h, k, c;
	scanf("%d %d %d %d %d", &s, &j, &h, &k, &c);
	if (s <= j && s <= h) {
		if (k <= c)
			printf("%d", s + k - 50);
		else
			printf("%d", s + c - 50);
	}
	else if (j < s && j <= h) {
		if (k <= c)
			printf("%d", j + k - 50);
		else
			printf("%d", j + c - 50);
	}
	else if (h < s && h < j) {
		if (k <= c)
			printf("%d", h + k - 50);
		else
			printf("%d", h + c - 50);
	}
}