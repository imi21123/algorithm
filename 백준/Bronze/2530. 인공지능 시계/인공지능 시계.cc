#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &d);

	c += d % 60;
	b += d / 60;

	if (c >= 60) {
		b += c / 60;
		c %= 60;
	}
	if (b >= 60) {
		a += b / 60;
		b %= 60;
	}
	if (a >= 24)
		a %= 24;

	printf("%d %d %d", a, b, c);
}