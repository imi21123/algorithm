#include <iostream>
using namespace std;

int n, num, pn = 0;

int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num == 1)
			continue;
		if (num % 2 != 0) {
			for (j = 3; j < num; j = j + 2)
				if (num % j == 0)
					break;
			if (j >= num)
				pn++;
		}
		else if (num == 2)
			pn++;
	}
	printf("%d", pn);
}