#include <iostream>
using namespace std;

int main() {
	int n, t, c, p;
	scanf("%d %d %d %d", &n, &t, &c, &p);
	if (n % t != 0)
		printf("%d", (n / t) * c * p);
	else
		printf("%d", (n / t - 1) * c * p);
}