#include <iostream>
using namespace std;

int main() {
	int l, b, a, c, d;
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	if (a % c == 0)
		a /= c;
	else
		a = a / c + 1;
	if (b % d == 0)
		b /= d;
	else
		b = b / d + 1;
	if (a >= b)
		printf("%d", l - a);
	else
		printf("%d", l - b);
}