#include <iostream>
using namespace std;

int main() {
	int n, i, h = 0;
	scanf("%d", &n);
	
	if (n < 100)
		printf("%d", n);
	else {
		for (i = 100; i <= n; i++) {
			if ((i / 100 - i % 100 / 10) == (i % 100 / 10 - i % 100 % 10))
				h++;
		}
		printf("%d", 99 + h);
	}
}